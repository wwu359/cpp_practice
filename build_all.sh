#!/bin/bash

echo "开始批量编译 cpp 文件..."
count=0

# 遍历当前目录所有.cpp文件
for file in *.cpp
do
    # 去掉后缀，得到可执行文件名
    exe_name="${file%.cpp}"
    echo "正在编译:$file->$exe_name"
    g++ "$file" -o "$exe_name"
    count=$((count+1))
done
echo "编译完成，共编译 $count 个文件"