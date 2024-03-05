#!/bin/sh
TAR_PREFIX_TSL_DIR=tsl
TAR_PREFIX_GENERATION=generate_tsl_
TMP_DIR=/tmp/tsl
UNPACK_DIR=${TMP_DIR}/unpacked
INST_DIR=${TMP_DIR}/install
mkdir -p ${TMP_DIR}
mkdir -p ${UNPACK_DIR}
mkdir -p ${INST_DIR}
WORK_DIR=$(pwd)


curl -L "https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/tsl.tar.gz" -o ${TMP_DIR}/tsl.tar.gz
#we don't need to use the GitHub Rest API
#curl -L "https://github.com/jpietrzyktud/tsl_ci/releases/download/$(curl -s "https://api.github.com/repos/jpietrzyktud/tsl_ci/releases/latest" | grep '"tag_name":' | sed -E 's/.*"([^"]+)".*/\1/')/tsl.tar.gz" -o ${TMP_DIR}/tsl.tar.gz
LSCPU_FLAGS_STRING=$(LANG=en;lscpu | grep 'Flags:' | sed -E 's/Flags:\s*//g' | sed -E 's/\s/:/g')
#create array from flags string
AVAIL_FLAGS=(${LSCPU_FLAGS_STRING//:/ })
#unpack tsl.conf
tar -xf ${TMP_DIR}/tsl.tar.gz -C ${TMP_DIR} ${TAR_PREFIX_TSL_DIR}/tsl.conf

MAX_AVAIL_FLAGS=0
CHOSEN_TSL_PATH=""
while read -r line1 && read -r line2; do
  #remove prefix "flags: " from line1
  TSL_FLAGS_STR=${line1#flags: }
  #create array from flags string
  TSL_FLAGS_ARR=(${TSL_FLAGS_STR//:/ })
  #remove prefix "path: " from line1
  TSL_PATH=${line2#path: }
  COUNTER=0
  for i in "${!TSL_FLAGS_ARR[@]}"
  do
    for j in "${!AVAIL_FLAGS[@]}"
    do
      if [ "${TSL_FLAGS_ARR[i]}" == "${AVAIL_FLAGS[j]}" ]; then
        COUNTER=$((COUNTER+1))
      fi
    done
  done
  #if COUNTER is greater than MAX_AVAIL_FLAGS, then update MAX_AVAIL_FLAGS and CHOSEN_TSL_PATH
  if [ $COUNTER -gt $MAX_AVAIL_FLAGS ]; then
    MAX_AVAIL_FLAGS=$COUNTER
    CHOSEN_TSL_PATH=${TSL_PATH}
  fi
done < ${TMP_DIR}/tsl/tsl.conf
echo "CHOSEN_TSL_PATH=${CHOSEN_TSL_PATH}"

if [ "$MAX_AVAIL_FLAGS" -eq "0" ]; then
  echo "No TSL found for this CPU"
  exit 1
fi

tar -xf ${TMP_DIR}/tsl.tar.gz -C ${UNPACK_DIR} ${TAR_PREFIX_TSL_DIR}/${TAR_PREFIX_GENERATION}${CHOSEN_TSL_PATH}
mv ${UNPACK_DIR}/${TAR_PREFIX_TSL_DIR}/${TAR_PREFIX_GENERATION}${CHOSEN_TSL_PATH}/* ${INST_DIR}
rm -rf ${INST_DIR}/src
rm ${INST_DIR}/tsl.conf
rm -rf ${INST_DIR}/CMakeLists.txt
rm -rf ${INST_DIR}/generation.log

cp -r ${INST_DIR}/* ${WORK_DIR}
echo "TSL installed in ${WORK_DIR}"
rm -rf ${TMP_DIR}