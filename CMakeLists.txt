cmake_minimum_required (VERSION 3.9)
project (mongo_vol VERSION 1.0.0 DESCRIPTION "mongo VOL connector" LANGUAGES C)

# Enable testing
enable_testing ()
include (CTest)

cmake_policy(SET CMP0074 NEW)

# Find HDF5
set(HDF5_ROOT /usr/local/HDF_Group/HDF5/1.14.3)
set(HDF5_DIR ${HDF5_ROOT}/cmake)

find_package(HDF5 1.14.3 COMPONENTS C REQUIRED)
link_directories(${HDF5_LIBRARY_DIRS})
include_directories(${HDF5_INCLUDE_DIR})

add_subdirectory(src)
add_subdirectory(test)
