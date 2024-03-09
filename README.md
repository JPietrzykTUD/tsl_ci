<!-- ![Generation using py3.8 - py3.12](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/validate-tsl.yml/badge.svg)
![Generation for Intel / ARM](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/generate-tsl.yml/badge.svg?branch=main)
![Runs on Intel x86](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/build-and-test-x86.yml/badge.svg?branch=main) -->

[![Generates with py3.8-3.12](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/generation-success.yml/badge.svg)](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/generation-success.yml)
[![Generates for x86](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/x86-generation-success.yml/badge.svg)](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/x86-generation-success.yml)
[![Generates for ARM](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/arm-generation-success.yml/badge.svg)](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/arm-generation-success.yml)
[![Builds on x86](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/x86-build-and-test-success.yml/badge.svg)](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/x86-build-and-test-success.yml)
[![Builds on ARM](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/arm-build-and-test-success.yml/badge.svg)](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/arm-build-and-test-success.yml)
[![Packaged](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/publish-latest.yml/badge.svg)](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/publish-latest.yml)

```console
curl -L -s "https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/install_tsl.sh" | /bin/bash
```

```console
TSL_DEB_FNAME=$(mktemp -ud --tmpdir libtsl-dev-XXXXX.deb); curl -L -s "https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/libtsl-dev.deb" -o ${TSL_DEB_FNAME} && sudo apt install ${TSL_DEB_FNAME}
```

```console
sudo dnf install -y https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/libtsl-dev.rpm
```