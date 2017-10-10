cmake_minimum_required(VERSION 3.9)
project(pyajplib)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -DHAVE_INTTYPES_NETINET_IN_H")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}")

set(PYTHON_INCLUDE_DIR "/usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/include/python3.6m/")
set(PYTHON_LIB_DIR "/usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/lib/python3.6/config-3.6m-darwin")
set(PYTHON_LIBRARY "/usr/local/Cellar/python3/3.6.3/Frameworks/Python.framework/Versions/3.6/lib/python3.6/config-3.6m-darwin/libpython3.6.dylib")

set(Boost_INCLUDE_DIR "/usr/local/Cellar/boost/1.65.1/include/boost/")
set(Boost_LIBRARIES "/usr/local/Cellar/boost/1.65.1/lib/")
set(BOOST_PYTH_LIB "/usr/local/Cellar/boost-python/1.65.1/lib/libboost_python3.dylib")

ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)

#find_package(Boost 1.65 COMPONENTS python REQUIRED)
#find_package(PythonLibs 3.6 REQUIRED)

include_directories(${PYTHON_INCLUDE_DIR} ${Boost_INCLUDE_DIR})
link_directories(${CMAKE_SOURCE_DIR} ${PYTHON_LIB_DIR} ${Boost_LIBRARIES})

set(LIB_SOURCE_FILES pyajplib.cpp)

add_library(pyajplib MODULE ${LIB_SOURCE_FILES})
target_link_libraries(pyajplib ${PYTHON_LIBRARY} ${BOOST_PYTH_LIB})
set_target_properties( pyajplib PROPERTIES PREFIX "" )
