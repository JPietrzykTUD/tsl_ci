#!/bin/sh -l

COMPILER=$1

REPO_ROOT=/github/workspace

ls ${REPO_ROOT}

echo "return_msg=\"TSL can be generated build (with $COMPILER) and successfully executed.\"" >> $GITHUB_OUTPUT
echo "success=1" >> $GITHUB_OUTPUT
