#!/bin/sh -l
# set -x

PARAM_PY_VERSION=$1
PY_VERSION=$(echo $PARAM_PY_VERSION | sed 's/\.//g')

echo "name=py${PY_VERSION}" >> $GITHUB_OUTPUT

REPO_ROOT=/github/workspace

GENERATION_PATH=/tmp/tsl
mkdir -p ${GENERATION_PATH}

LOG_PATH=${REPO_ROOT}/validation/py${PY_VERSION}
mkdir -p ${LOG_PATH}
echo "out=${LOG_PATH}" >> $GITHUB_OUTPUT


source /py/venvs/py${PY_VERSION}/bin/activate
ruff check --ignore E501,F541,F401,F841,E731 --target-version="py${PY_VERSION}" -v . > ${LOG_PATH}/ruff.log 2>&1
if [ $? -ne 0 ]; then
  echo "msg=ruff failed" >> $GITHUB_OUTPUT
  echo "success=0" >> $GITHUB_OUTPUT
  exit
fi

yamllint --no-warnings -d relaxed ./primitive_data > ${LOG_PATH}/yamllint.log 2>&1
if [ $? -ne 0 ]; then
  echo "msg=yamllint failed" >> $GITHUB_OUTPUT
  echo "success=0" >> $GITHUB_OUTPUT
  exit
fi

python main.py -o $GENERATION_PATH > ${LOG_PATH}/tslgen.log 2>&1
if [ $? -ne 0 ]; then
  echo "msg=TSL generation failed" >> $GITHUB_OUTPUT
  echo "success=0" >> $GITHUB_OUTPUT
  exit
fi

deactivate

echo "msg=\"TSL can be generated successfully.\"" >> $GITHUB_OUTPUT
echo "success=1" >> $GITHUB_OUTPUT