FROM arm64v8/alpine:latest

RUN apk update

RUN apk add --no-cache gcc
RUN apk add --no-cache g++
RUN apk add --no-cache clang
RUN apk add --no-cache cmake
RUN apk add --no-cache make
RUN apk add --no-cache ninja
RUN apk add --no-cache autoconf
RUN apk add --no-cache automake
RUN apk add --no-cache dos2unix
RUN apk add --no-cache wget
RUN apk add --no-cache xz
RUN apk add --no-cache tar
RUN apk add --no-cache rsync


ENTRYPOINT ["/usr/bin/sh"]