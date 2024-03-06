#!/bin/sh -l

VERSION_ORIG=$1 #v0.0.1
#remove prefix "v" from VERSION_ORIG
VERSION=${VERSION_ORIG#v}
TSL_TAR_GZ_NAME=$2 #tsl.tar.gz
TSL_TAR_PREFIX=$3 #tsl/generate_tsl_

RPM_BASE=/github/home/rpmbuild
SPEC_FILE=${RPM_BASE}/SPECS/tsl.spec

# sed ${{ VERSION_TAG }} in tsl.spec with $VERSION
sed -i "s/\${{ VERSION_TAG }}/${VERSION}/g" ${SPEC_FILE}
echo "#sed -i s/\${{ VERSION_TAG }}/${VERSION}/g ${SPEC_FILE}" >> ${SPEC_FILE}
sed -i "s/\${{ TSL_TARBALL }}/${TSL_TAR_GZ_NAME}/g" ${SPEC_FILE}
echo "#sed -i s/\${{ TSL_TARBALL }}/${TSL_TAR_GZ_NAME}/g ${SPEC_FILE}" >> ${SPEC_FILE}
sed -i "s|\${{ TSL_TARBALL_PREFIX }}|${TSL_TAR_PREFIX}|g" ${SPEC_FILE}
echo "#sed -i s|\${{ TSL_TARBALL_PREFIX }}|${TSL_TAR_PREFIX}|g ${SPEC_FILE}" >> ${SPEC_FILE}

REPO_ROOT=/github/workspace
TSL_ROOT=${REPO_ROOT}/${TSL_TAR_GZ_NAME}
OUT_BASE=packages
OUT=${REPO_ROOT}/${OUT_BASE}
mkdir -p ${OUT}
echo "out=${OUT_BASE}" >> $GITHUB_OUTPUT

echo "#TSL_ROOT: ${TSL_ROOT}" >> ${SPEC_FILE}
echo "#ls ${TSL_ROOT} -halt" >> ${SPEC_FILE}

cp ${SPEC_FILE} ${OUT}

cp ${TSL_ROOT} ${RPM_BASE}/SOURCES/${TSL_TAR_GZ_NAME}

rpmbuild -bb ${RPM_BASE}/SPECS/tsl.spec

if [ $? -ne 0 ]; then
  echo "msg=rpmbuild failed" >> $GITHUB_OUTPUT
  echo "success=false" >> $GITHUB_OUTPUT
  exit
fi

# find TSL*.rpmm in ${RPM_BASE}/RPMS/ recursive and copy to /github/workspace
find ${RPM_BASE}/RPMS/ -name "TSL*.rpm" -exec cp {} ${OUT} \;

echo "msg=rpmbuild success" >> $GITHUB_OUTPUT
echo "success=true" >> $GITHUB_OUTPUT