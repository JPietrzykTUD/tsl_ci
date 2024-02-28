#!/bin/sh -l

PARAM_TARGETS=$1
CHECK_TARGESTS=$2
PARAM_COMPILERS=$3

TARGETS=$(echo $PARAM_TARGETS | sed 's/\[//g' | sed 's/\]//g' | sed 's/ //g')
TARGETS_NAME=$(echo $TARGETS | sed 's/ /_/g' | sed 's/;/_/g')

COMPILERS=$(echo $PARAM_COMPILERS | sed 's/\[//g' | sed 's/\]//g' | sed 's/ //g')
COMPILERS_NAME=$(echo $COMPILERS | sed 's/ /_/g' | sed 's/;/_/g')

AVAIL_FLAGS=$(LANG=en;lscpu|grep -i flags | tr ' ' '\n' | grep -v -E '^Flags:|^$' | sort -d | tr '\n' ',')
AVAIL_FLAGS=${AVAIL_FLAGS%,}
AVAIL_FLAGS_ARRAY=($(echo $AVAIL_FLAGS | tr "," "\n"))

REPO_ROOT=/github/workspace
GENERATION_PATH=/tmp/tsl
CI_BASE=$REPO_ROOT/ci
CI_GENERATION_BASE=$CI_BASE/test/

mkdir -p $GENERATION_PATH
mkdir -p $CI_PIPELINE_OUT
mkdir -p $CI_GENERATION_BASE

if [[ CHECK_TARGESTS == 1 ]]; then
  for requested_flag in ${TARGETS//,/ }
  do
    if [[ ! ${AVAIL_FLAGS[@]} =~ $requested_flag ]]; then
      echo "return_msg=\"Flag $requested_flag not available\"" >> $GITHUB_OUTPUT
      echo "success=0" >> $GITHUB_OUTPUT
      exit
    fi
  done
fi

TSL_GENERATED=${GENERATION_PATH}/${TARGETS_NAME}
mkdir -p $TSL_GENERATED

cd $REPO_ROOT
python3 ./main.py --targets $TARGETS --out ${TSL_GENERATED} >${CI_BASE}/


for compiler in ${COMPILERS//,/ }
do
  echo "Compiling with $compiler"
  CXX=$compiler cmake -S . -B build_${PARAM_TSL_GENERATED}_${compiler} -DCMAKE_BUILD_TYPE=Release -DUSE_EXISTING_TSL_PATH=$TSL_GENERATED >build_${PARAM_TSL_GENERATED}_${compiler}/build.log 2>&1
  if [ $? -ne 0 ]; then
    echo "return_msg=\"Could not generate TSL (see build_${PARAM_TSL_GENERATED}_${compiler}/build.log)\"" >> $GITHUB_OUTPUT
    echo "success=0" >> $GITHUB_OUTPUT
    exit
  fi
  cmake --build build_${PARAM_TSL_GENERATED}_${compiler} -j >build_${PARAM_TSL_GENERATED}_${compiler}/build.log 2>&1
  if [ $? -ne 0 ]; then
    echo "return_msg=\"Could not build TSL with $compiler (see build_${PARAM_TSL_GENERATED}_${compiler}/build.log) \"" >> $GITHUB_OUTPUT
    echo "success=0" >> $GITHUB_OUTPUT
    exit
  fi

  build_${PARAM_TSL_GENERATED}_${compiler}/generator_output/build/src/tsl_test >build_${PARAM_TSL_GENERATED}_${compiler}/run.log 2>&1
  if [ $? -ne 0 ]; then
    echo "return_msg=\"Could not run TSL (see build_${PARAM_TSL_GENERATED}_${compiler}/run.log) \"" >> $GITHUB_OUTPUT
    echo "success=0" >> $GITHUB_OUTPUT
    exit
  fi
done

echo "return_msg=\"TSL can be generated (with $TARGETS), build (with $PARAM_COMPILERS) and successfully executed.\"" >> $GITHUB_OUTPUT
echo "success=1" >> $GITHUB_OUTPUT
