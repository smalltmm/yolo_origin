cmake_minimum_required(VERSION 3.0)
project(onnx_inference)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(onnx_inference src/main.cpp)
target_link_libraries(onnx_inference ${OpenCV_LIBS})
