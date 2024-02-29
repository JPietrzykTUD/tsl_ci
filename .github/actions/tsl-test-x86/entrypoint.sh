#!/bin/sh -l

COMPILER=$1
TSL_PATH=$2

REPO_ROOT=/github/workspace
TSL_ROOT=${REPO_ROOT}/${TSL_PATH}

echo "name=${COMPILER}" >> $GITHUB_OUTPUT

LOG_BASE=build/${COMPILER}
LOG_PATH=${REPO_ROOT}/${LOG_BASE}
mkdir -p ${LOG_PATH}
echo "out=${LOG_BASE}" >> $GITHUB_OUTPUT

echo "TSL_ROOT: ${TSL_ROOT}" > ${LOG_PATH}/tsl.log 2>&1
ls ${TSL_ROOT} -halt > ${LOG_PATH}/tsl.log 2>&1

# iterate over all directories in tsl/intel
for d in ${TSL_ROOT}/*; do
  if [ -d "$d" ]; then
    CURRENT_PATH=${TSL_ROOT}/${d}
    echo "Building ${CURRENT_PATH}" >> ${LOG_PATH}/tsl.log 2>&1
    CURRENT_LOG_PATH=${LOG_PATH}/${d}
    mkdir -p ${CURRENT_LOG_PATH}
    cmake -S ${CURRENT_PATH} -B ${CURRENT_PATH}/build -DCMAKE_CXX_COMPILER=${COMPILER} -DCMAKE_BUILD_TYPE=Release > ${CURRENT_LOG_PATH}/cmake.log 2>&1
    if [ $? -ne 0 ]; then
      echo "msg=cmake failed for $d" >> $GITHUB_OUTPUT
      echo "success=false" >> $GITHUB_OUTPUT
      exit
    fi
    cmake --build ${CURRENT_PATH}/build --config Release -j > ${CURRENT_LOG_PATH}/make.log 2>&1
    if [ $? -ne 0 ]; then
      echo "msg=Build failed for $d" >> $GITHUB_OUTPUT
      echo "success=false" >> $GITHUB_OUTPUT
      exit
    fi
    ${CURRENT_PATH}/build/src/test/tsl_test > ${CURRENT_LOG_PATH}/test.log 2>&1
    if [ $? -ne 0 ]; then
      echo "msg=Tests failed for $d" >> $GITHUB_OUTPUT
      echo "success=false" >> $GITHUB_OUTPUT
      exit
    fi
  fi
done

echo "msg=TSL can be generated build (with $COMPILER) and all tests were green." >> $GITHUB_OUTPUT
echo "success=success" >> $GITHUB_OUTPUT
