# Find the math library
find_library(MATH_LIB m)

# Build the test
add_executable (vol_plugin vol_plugin.c)
target_include_directories (vol_plugin PRIVATE "${PROJECT_SOURCE_DIR}/src")
target_link_libraries (vol_plugin ${HDF5_C_LIBRARIES} ${MATH_LIB} z)

message("test HDF5_C_LIBRARIES: ${HDF5_C_LIBRARIES}")

# Add the test
add_test (vol_plugin vol_plugin)
set_tests_properties(vol_plugin PROPERTIES
    ENVIRONMENT "HDF5_PLUGIN_PATH=${PROJECT_BINARY_DIR}/src")

