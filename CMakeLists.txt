cmake_minimum_required(VERSION 3.10)
project(QtPCLApp)

set(CMAKE_AUTOMOC ON)  # 启用自动处理 MOC
set(CMAKE_AUTOUIC ON)   # 启用自动处理 UIC
set(CMAKE_AUTORCC ON)   # 启用自动处理资源文件

# 查找 Qt 和 PCL
find_package(Qt5 REQUIRED COMPONENTS Widgets Core)
find_package(PCL REQUIRED)
find_package(VTK REQUIRED)

# 包含头文件目录
include_directories(${PCL_INCLUDE_DIRS}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${VTK_INCLUDE_DIRS}
)

add_definitions(${PCL_DEFINITIONS})

# 添加源文件
set(SOURCES
    src/main.cpp
    src/widget_main.cpp
    src/widget_process.cpp
    include/widget_main.hpp # 所有的头文件也需要加入到 SOURCES 中，否则无法生成 moc 文件,会报错undefined reference to `vtable for Widget'
    include/main_widget.hpp
    include/process_widget.hpp
    include/widget_process.hpp
)


# 生成可执行文件
add_executable(QtPCLApp ${SOURCES})

# 链接 Qt 和 PCL 库
target_link_libraries(QtPCLApp Qt5::Widgets Qt5::Core ${PCL_LIBRARIES} ${VTK_LIBRARIES})
