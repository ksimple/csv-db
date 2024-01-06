# 使用基础的 Ubuntu 20.04 镜像
FROM ubuntu:20.04 AS builder

# 设置工作目录
WORKDIR /app

# 更新 apt 软件包列表并安装构建工具
RUN apt-get update
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential cmake
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y software-properties-common

RUN add-apt-repository ppa:pistache+team/unstable
RUN apt update
RUN DEBIAN_FRONTEND=noninteractive apt install -y libpistache-dev
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y pkg-config
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y libbrotli-dev
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y gdb
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y flex bison

COPY antlr-runtime/ ./antlr-runtime/

RUN mkdir antlr-runtime/build && \
    cd antlr-runtime/build && \
    cmake ..

RUN cd antlr-runtime/build && make -j4
RUN cd antlr-runtime/build && make install

# 复制当前目录下的 CMakeLists.txt 和源代码到容器中
COPY CMakeLists.txt .
COPY src/ ./src/
COPY antlr/ ./antlr/

# 执行 cmake 构建
RUN mkdir build && \
    cd build && \
    cmake ..

# 执行 make 构建应用程序
RUN cd build && make -j2
RUN mkdir /app/data

RUN find /app

CMD ["/bin/bash"]
