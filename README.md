![Generation using py3.8 - py3.12](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/validate-tsl.yml/badge.svg)
![Generation for Intel / ARM](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/generate-tsl.yml/badge.svg?branch=main)
![Runs on Intel x86](https://github.com/JPietrzykTUD/tsl_ci/actions/workflows/build-and-test-x86.yml/badge.svg?branch=main)


```console
curl -L -s "https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/install_tsl.sh" | /bin/bash
```

```console

TSL_DEB_FNAME=$(mktemp -ud --tmpdir libtsl-dev-XXXXX.deb); curl -L -s "https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/libtsl-dev.deb" -o ${TSL_DEB_FNAME} | sudo apt install ${TSL_DEB_FNAME}
```

```console
sudo dnf install -y https://github.com/JPietrzykTUD/tsl_ci/releases/latest/download/libtsl-dev.rpm
```