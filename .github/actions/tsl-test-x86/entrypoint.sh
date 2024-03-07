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

echo "Platform: $(uname -m)" >> ${LOG_PATH}/tsl.log 2>&1
echo "TSL_ROOT: ${TSL_ROOT}" >> ${LOG_PATH}/tsl.log 2>&1
ls ${TSL_ROOT} -halt >> ${LOG_PATH}/tsl.log 2>&1

COMPILER_BIN=$(which ${COMPILER})
COMPILER_VERSION=$(${COMPILER_BIN} --version)
echo "Compiler: ${COMPILER} (${COMPILER_BIN})" >> ${LOG_PATH}/tsl.log 2>&1
echo "Compiler version: ${COMPILER_VERSION}" >> ${LOG_PATH}/tsl.log 2>&1

# iterate over all directories in tsl/intel
for d in ${TSL_ROOT}/*; do
  if [ -d "$d" ]; then    
    CURRENT_PATH=${d}
    STRIPPED_PATH=${CURRENT_PATH#${TSL_ROOT}/}
    echo "Building ${STRIPPED_PATH} (with ${COMPILER})"
    echo "Building ${CURRENT_PATH}" >> ${LOG_PATH}/tsl.log 2>&1
    CURRENT_LOG_PATH=${LOG_PATH}/${STRIPPED_PATH}
    mkdir -p ${CURRENT_LOG_PATH}
    cmake -S ${CURRENT_PATH} -B ${CURRENT_PATH}/build -DCMAKE_CXX_COMPILER=${COMPILER_BIN} -DCMAKE_BUILD_TYPE=Release >> ${CURRENT_LOG_PATH}/cmake.log 2>&1
    if [ $? -ne 0 ]; then
      echo "msg=cmake failed for $d" >> $GITHUB_OUTPUT
      echo "success=false" >> $GITHUB_OUTPUT
      exit
    fi
    cmake --build ${CURRENT_PATH}/build --config Release >> ${CURRENT_LOG_PATH}/make.log 2>&1
    if [ $? -ne 0 ]; then
      echo "msg=Build failed for $d" >> $GITHUB_OUTPUT
      echo "success=false" >> $GITHUB_OUTPUT
      exit
    fi
    echo "Done"
    echo "Testing (${CURRENT_PATH}/build/src/test/tsl_test)"
    ls -halt ${CURRENT_PATH}/build/src/test/tsl_test
    file ${CURRENT_PATH}/build/src/test/tsl_test
    echo "Executing ${CURRENT_PATH}/build/src/test/tsl_test" >> ${CURRENT_LOG_PATH}/test.log 2>&1
    EXECUTABLE=${CURRENT_PATH}/build/src/test/tsl_test
    echo "file $(file ${EXECUTABLE})" >> ${CURRENT_LOG_PATH}/test.log 2>&1
    ${EXECUTABLE} >> ${CURRENT_LOG_PATH}/test.log 2>&1
    if [ $? -ne 0 ]; then
      echo "msg=Tests failed for $d" >> $GITHUB_OUTPUT
      echo "success=false" >> $GITHUB_OUTPUT
      exit
    fi
    echo "Done"
  fi
done

echo "msg=TSL can be generated build (with $COMPILER) and all tests were green." >> $GITHUB_OUTPUT
echo "success=true" >> $GITHUB_OUTPUT
