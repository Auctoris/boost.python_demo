cmake_minimum_required(VERSION 3.9)

project(pyajplib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -DHAVE_INTTYPES_NETINET_IN_H")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")

set(PYTHON_INCLUDE_DIR "/usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/include/python3.6m/")
set(PYTHON_LIB_DIR "/usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/lib/python3.6/config-3.6m-darwin")

ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)

FIND_PACKAGE(Boost 1.65 COMPONENTS python REQUIRED)

include_directories(${CMAKE_SOURCE_DIR} ${Boost_INCLUDE_DIR} ${PYTHON_INCLUDE_DIR})
link_directories(${CMAKE_SOURCE_DIR} ${PYTHON_LIB_DIR} /usr/local/lib)

set(LIB_SOURCE_FILES pyajplib.cpp ajp.cpp ajp2.cpp)

add_library(pyajplib MODULE ${LIB_SOURCE_FILES})