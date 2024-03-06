Name:           TSL
Version:        ${{ VERSION_TAG }}
Release:        1
Summary:        TSL
BuildArch:      noarch

License:        Apache 2.0
URL:            www.google.de
Source0:        ${{ TSL_TARBALL }}

Requires:       util-linux tar gzip grep sed

%global include_dir /usr/include
%global tsl_dir_name tsl
%global tsl_dir %{include_dir}/%{tsl_dir_name}
%global tsl_hollistic_name __hollistic
%global tsl_hollistic_dir %{tsl_dir}/%{tsl_hollistic_name}
%global custom_build_root /root/rpmbuild/BUILDROOT
%global custom_source_dir /root/rpmbuild/SOURCES

%description

%post
LSCPU_FLAGS_STRING=$(LANG=en;lscpu | grep 'Flags:' | sed -E 's/Flags:\s*//g' | sed -E 's/\s/:/g')
AVAIL_FLAGS=(${LSCPU_FLAGS_STRING//:/ })
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
  if [ $COUNTER -gt $MAX_AVAIL_FLAGS ]; then
    MAX_AVAIL_FLAGS=$COUNTER
    CHOSEN_TSL_PATH=${TSL_PATH}
  fi
done < %{_builddir}/tsl/tsl.conf
if [ "$MAX_AVAIL_FLAGS" -eq "0" ]; then
  echo "No TSL found for this CPU"
  exit 1
fi

TMP=$(mktemp -ud %{_tmppath}/%{name}-XXXXXX)
mkdir -p ${TMP}
tar -xf %{tsl_hollistic_dir}/${{ TSL_TARBALL }} -C ${TMP} ${{ TSL_TARBALL_PREFIX }}${CHOSEN_TSL_PATH}
cp -a ${TMP}/${{ TSL_TARBALL_PREFIX }}${CHOSEN_TSL_PATH}/include/* %{tsl_dir}
cp -r ${TMP}/${{ TSL_TARBALL_PREFIX }}${CHOSEN_TSL_PATH}/supplementary %{tsl_dir}

%postun
rm -rf %{tsl_dir}

%install
#we should use %{buildroot}, but for some reasons, %{buildroot} is /github/home/rpmbuild/BUILDROOT instead of /root/rpmbuild/BUILDROOT
rm -rf %{custom_build_root}/*
mkdir -p %{custom_build_root}%{tsl_hollistic_dir}
cp -a %{custom_source_dir}/${{ TSL_TARBALL }} %{custom_build_root}%{tsl_hollistic_dir}

%clean


%files
%{tsl_hollistic_dir}

- 
