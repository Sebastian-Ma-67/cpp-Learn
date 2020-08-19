cmake_minimum_required(VERSION 2.8)
project(ModelWash)
set(CMAKE_BUILD_TYPE Release)#compile mode
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)#set path of executable file
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)#set outpath of produced lib
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") 
include_directories(
${PROJECT_SOURCE_DIR}/include
)
add_executable(ModelWash src/Astar.cpp src/clipper.cpp src/clipper_demo.cpp src/geomancy.cpp src/house.cpp src/InnerWall.cpp src/InWall.cpp src/line.cpp src/NetDataLog.cpp src/Output_Room_Type.cpp src/point.cpp src/polygon.cpp src/room.cpp src/score.cpp src/StrTransform.cpp src/svd.cpp src/test.cpp src/tinystr.cpp src/tinyxml.cpp src/tinyxmlerror.cpp src/tinyxmlparser.cpp src/wall.cpp src/AAAselect_xmlMain.cpp)#src/AAAstatisticRoomNameMain.cpp only one main.cpp
#add_executable(ModelWash.out ${PROJECT_SOURCE_DIR}/src)#生成可执行文件
#编译选项
#add_definition("-Wall -g")
#添加依赖
add_dependencies(target-name depend-target1 depend-target2 ...)