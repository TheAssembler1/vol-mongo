# HDF5 VOL connector mongo

## Confuration

Replace the following `file | [line_number, ...]` with your installation of HDF5

- `.cland | 1, 5, 7`
- `CMakeLists.txt | 11`
- `c_cpp_properties.json | 9`

## Getting started

You will need a few things to build the code in this repository:

* HDF5 1.14.0 or later
* CMake (3.9 or later) or the Autotools (autoconf 2.69 or later and matching automake, etc.)

### CMake Builds

1) Run ccmake or the CMake GUI and point it at a VOL-enabled HDF5 installation. You may need to switch to see HDF5\_DIR, which you'll need to set to the share/cmake directory of your install. Configure and generate.

2) Build the software using 'make', etc.

3) Run the test program using 'make test', 'ctest .', etc.
