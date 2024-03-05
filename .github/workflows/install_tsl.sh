#!/bin/bash
TAR_PREFIX_TSL_DIR=tsl
TAR_PREFIX_GENERATION=generate_tsl_

curl -L "https://github.com/jpietrzyktud/tsl_ci/releases/download/$(curl -s "https://api.github.com/repos/jpietrzyktud/tsl_ci/releases/latest" | grep '"tag_name":' | sed -E 's/.*"([^"]+)".*/\1/')/tsl.tar.gz" -o tsl.tar.gz
LSCPU_FLAGS_STRING=$(lscpu | grep 'Flags:' | sed -E 's/Flags:\s*//g' | sed -E 's/\s/:/g')
AVAIL_FLAGS=(${LSCPU_FLAGS_STRING//:/ })
for i in "${!AVAIL_FLAGS[@]}"
do
    echo "$i=>${AVAIL_FLAGS[i]}"
done

tar -tf tsl.tar.gz | grep -o '^[^/]*/[^/]*/' | uniq | sed "s/^${TAR_PREFIX_TSL_DIR}\/${TAR_PREFIX_GENERATION}//" | sed 's|/$||' | 

tar -tf tsl.tar.gz | grep -o '^[^/]*/[^/]*/' | uniq | sed 's/^tsl\/generate_tsl_//' | sed 's|/$||'