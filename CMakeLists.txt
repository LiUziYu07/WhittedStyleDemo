cmake_minimum_required(VERSION 3.21)
project(WhittedStyleDemo)

set(CMAKE_CXX_STANDARD 14)

add_executable(WhittedStyleDemo main.cpp Tool/vec3.h Tool/color.h Ray/ray.h hit/hittable.h Tool/sphere.h hit/hittable_list.h constant/constant.h camera/camera.h material/material.h shape/cube.h)
