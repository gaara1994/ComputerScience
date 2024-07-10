#!/bin/bash

# 检查是否提供了两个参数
if [ $# -ne 2 ]; then
    echo "Usage: $0 start end"
    exit 1
fi

start=$1
end=$2

# 使用seq命令生成序列，并配合mkdir创建目录
for i in $(seq $start $end); do
    mkdir "$i"
done