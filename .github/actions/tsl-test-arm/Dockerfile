FROM arm64v8/ubuntu:latest

RUN apt update
RUN apt-get -y install \
  gcc g++ \
  clang \
  make cmake zip

LABEL org.opencontainers.image.source=https://github.com/db-tu-dresden/TSLGen
LABEL org.opencontainers.image.description="TSLGenerator Compilation Image for x86"
LABEL org.opencontainers.image.licenses=Apache-2.0

COPY entrypoint.sh /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]