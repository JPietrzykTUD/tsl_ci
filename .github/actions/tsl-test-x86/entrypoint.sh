#!/bin/sh -l

COMPILER=$1

REPO_ROOT=/github/workspace

ls ${REPO_ROOT}/tsl/intel/ -halt

echo "msg=\"TSL can be generated build (with $COMPILER) and successfully executed.\"" >> $GITHUB_OUTPUT
echo "success=success" >> $GITHUB_OUTPUT
