FROM fedora:latest

RUN dnf -y install fedora-packager rpmdevtools util-linux

RUN mkdir -p /github/home/rpmbuild/{BUILD,BUILDROOT,RPMS,SOURCES,SPECS,SRPMS}

LABEL org.opencontainers.image.source=https://github.com/db-tu-dresden/TSLGen
LABEL org.opencontainers.image.description="RPM Builder for TSLGen"
LABEL org.opencontainers.image.licenses=Apache-2.0

COPY entrypoint.sh /entrypoint.sh
COPY tsl.spec /github/home/rpmbuild/SPECS/tsl.spec

# ENTRYPOINT [ "/bin/bash" ]
ENTRYPOINT ["/entrypoint.sh"]
