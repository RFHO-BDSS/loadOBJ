cmake_minimum_required(VERSION 2.6 FATAL_ERROR)

project(texture_load)

##---{ change this to the location of your pcl build}
set(PCL_DIR "C:/pcl/install/cmake")

##---{ find PCL }
find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

##---{ add executables }
add_executable(texture_load src/texture_load.cpp)
target_link_libraries(texture_load ${PCL_LIBRARIES})
