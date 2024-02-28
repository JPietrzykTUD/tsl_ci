FROM ubuntu:latest

RUN apt update 
RUN apt-get -y install software-properties-common

RUN add-apt-repository ppa:deadsnakes/ppa && \
  apt update && \
  apt-get -y install \
    python3.8 python3.8-pip python3.8-venv \
    python3.9 python3.9-pip python3.9-venv \
    python3.10 python3.10-pip python3.10-venv \
    python3.11 python3.11-pip python3.11-venv && \
  mkdir -p /py/venvs && \
  python3.8 -m venv /py/venvs/py38 && \
  python3.9 -m venv /py/venvs/py39 && \
  python3.10 -m venv /py/venvs/py310 && \
  python3.11 -m venv /py/venvs/py311

COPY requirements.txt /requirements.txt

RUN source /py/venvs/py38/bin/activate && \
  pip install -r /requirements.txt && \
  pip install ruff && pip install yamllint && \
  deactivate && \
  source /py/venvs/py39/bin/activate && \
  pip install -r /requirements.txt && \
  pip install ruff && pip install yamllint && \
  deactivate && \
  source /py/venvs/py310/bin/activate && \
  pip install -r /requirements.txt && \
  pip install ruff && pip install yamllint && \
  deactivate && \
  source /py/venvs/py311/bin/activate && \
  pip install -r /requirements.txt && \
  pip install ruff && pip install yamllint && \
  deactivate

LABEL org.opencontainers.image.source=https://github.com/db-tu-dresden/TSLGen
LABEL org.opencontainers.image.description="TSLGenerator Validation Image for x86"
LABEL org.opencontainers.image.licenses=Apache-2.0

COPY entrypoint.sh /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]
