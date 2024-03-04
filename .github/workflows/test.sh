#!/bin/sh -l

VERSION=v0.0.1


#Repeat 1000 times
for i in {1..2000}
do
  #Version is of format vXX.Y.Z
  #get rid of the v
  VERSION=${VERSION:1}
  MAJOR=${VERSION%%.*}
  TEMP=${VERSION#*.}
  MINOR=${TEMP%%.*}
  PATCH=${TEMP#*.}


  #if PATCH == 9, increment MINOR and set PATCH to 0
  if [ $PATCH -eq 9 ]; then
    MINOR=$((MINOR+1))
    PATCH=0
  else
    PATCH=$((PATCH+1))
  fi

  #if MINOR == 9, increment MAJOR and set MINOR to 0
  if [ $MINOR -eq 10 ]; then
    MAJOR=$((MAJOR+1))
    MINOR=0
  fi
  VERSION="v$MAJOR.$MINOR.$PATCH"
  echo "$VERSION"
done

