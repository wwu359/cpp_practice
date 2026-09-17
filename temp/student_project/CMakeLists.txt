cmake_minimum_required(VERSION 3.16)
project(student_project)

#设置c++标准
set(CAMKE_CXX_STANDARD 11)

#生成可执行文件：后面跟所有.cpp源文件，不用写.h
add_executable(main main.cpp student.cpp)