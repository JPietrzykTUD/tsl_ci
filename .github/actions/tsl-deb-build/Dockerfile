FROM ubuntu:latest

RUN apt-get update
RUN apt-get -y install build-essential binutils lintian debhelper dh-make devscripts

RUN mkdir -p /root/debbuild/tsl/DEBIAN

LABEL org.opencontainers.image.source=https://github.com/db-tu-dresden/TSLGen
LABEL org.opencontainers.image.description="DEB Builder for TSLGen"
LABEL org.opencontainers.image.licenses=Apache-2.0

#COPY entrypoint.sh /entrypoint.sh
#COPY tsl.spec /root/rpmbuild/SPECS/tsl.spec

ENTRYPOINT [ "/bin/bash" ]
#ENTRYPOINT ["/entrypoint.sh"]