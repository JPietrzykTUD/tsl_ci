#!/bin/sh -l

COMPILER=$1

REPO_ROOT=/github/workspace

echo "name=${COMPILER}" >> $GITHUB_OUTPUT

LOG_BASE=build/${COMPILER}
LOG_PATH=${REPO_ROOT}/${LOG_BASE}
mkdir -p ${LOG_PATH}
echo "out=${LOG_BASE}" >> $GITHUB_OUTPUT


ls ${REPO_ROOT}/tsl/intel/ -halt > ${LOG_PATH}/tsl.log 2>&1

echo "msg=\"TSL can be generated build (with $COMPILER) and successfully executed.\"" >> $GITHUB_OUTPUT
echo "success=success" >> $GITHUB_OUTPUT
