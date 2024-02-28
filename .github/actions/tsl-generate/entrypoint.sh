#!/bin/sh -l
# set -x
PARAM_TARGETS=$1

TARGETS=$(echo $PARAM_TARGETS | sed 's/\[//g' | sed 's/\]//g' | sed 's/ //g' | sed 's/,/ /g')
TARGETS_NAME=$(echo $TARGETS | sed 's/ /_/g' | sed 's/;/_/g' | sed 's/,/_/g')
echo "name=${TARGETS_NAME}" >> $GITHUB_OUTPUT

REPO_ROOT=/github/workspace

GENERATION_BASE=ci/generation/${TARGETS_NAME}
GENERATION_PATH=${REPO_ROOT}/${GENERATION_BASE}
echo "out=${GENERATION_BASE}" >> $GITHUB_OUTPUT

mkdir -p ${GENERATION_PATH}
mkdir -p ${LOG_PATH}

cd ${REPO_ROOT}
ls -halt >> ${GENERATION_PATH}/generation.log 2>&1
python3 ${REPO_ROOT}/main.py --targets ${TARGETS} --out ${GENERATION_PATH} >>${GENERATION_PATH}/generation.log 2>&1
if [ $? -ne 0 ]; then
  echo "msg=Could not generate TSL (with $TARGETS)" >> $GITHUB_OUTPUT
  echo "success=0" >> $GITHUB_OUTPUT
  exit
fi

echo "msg=TSL can be generated (with $TARGETS)." >> $GITHUB_OUTPUT
echo "success=1" >> $GITHUB_OUTPUT