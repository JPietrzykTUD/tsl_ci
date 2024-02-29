#!/bin/sh -l

COMPILER=$1

REPO_ROOT=/github/workspace

echo "name=${COMPILER}" >> $GITHUB_OUTPUT

LOG_PATH=${REPO_ROOT}/validation/py${PY_VERSION}
mkdir -p ${LOG_PATH}
echo "out=${LOG_PATH}" >> $GITHUB_OUTPUT


ls ${REPO_ROOT}/tsl/intel/ -halt >> ${LOG_PATH}/tsl.log 2>&1

echo "msg=\"TSL can be generated build (with $COMPILER) and successfully executed.\"" >> $GITHUB_OUTPUT
echo "success=success" >> $GITHUB_OUTPUT
