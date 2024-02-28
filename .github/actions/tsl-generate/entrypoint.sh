#!/bin/sh -l
# set -x
PARAM_TARGETS=$1
OUT_BASE=$2

TARGETS=$(echo $PARAM_TARGETS | sed 's/\[//g' | sed 's/\]//g' | sed 's/ //g')
TARGETS_NAME=$(echo $TARGETS | sed 's/ /_/g' | sed 's/;/_/g' | sed 's/,/_/g')

REPO_ROOT=/github/workspace

GENERATION_PATH=${REPO_ROOT}/${OUT_BASE}/${TARGETS_NAME}
LOG_BASE=ci/logs/generation
LOG_PATH=${REPO_ROOT}/${LOG_BASE}

# echo $REPO_ROOT
# echo $GENERATION_PATH
# echo $LOG_PATH
# echo ${LOG_PATH}/generation_${TARGETS_NAME}.log
# echo $TARGETS

# exit

mkdir -p ${GENERATION_PATH}
mkdir -p ${LOG_PATH}

python3 ${REPO_ROOT}/main.py --targets $TARGETS --out ${GENERATION_PATH} >${LOG_PATH}/generation_${TARGETS_NAME}.log 2>&1
if [ $? -ne 0 ]; then
  echo "msg=\"Could not generate TSL (see ${LOG_PATH}/generation.log)\"" >> $GITHUB_OUTPUT
  echo "success=0" >> $GITHUB_OUTPUT
  exit
fi

echo "logs=${LOG_BASE}" >> $GITHUB_OUTPUT
echo "msg=\"TSL can be generated (with $TARGETS). Logs can be found at ${LOG_PATH}/generation_${TARGETS_NAME}.log\"" >> $GITHUB_OUTPUT
echo "success=1" >> $GITHUB_OUTPUT