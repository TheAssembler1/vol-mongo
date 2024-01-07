# HDF5 VOL connector mongo

## Confuration

I recommend building whatever HDF5 version you want to use from source
Replace the following `file | [line_number, ...]` with your installation of HDF5

- `.cland | 1, 5, 7`
- `CMakeLists.txt | 11`
- `c_cpp_properties.json | 9`

For libsson and mongo db installation is as simple as 

`apt install libbson-dev`
`apt install libmongoc-dev`
`apt install libicu-dev`

To run mongodb locally [installation](https://www.mongodb.com/docs/manual/tutorial/install-mongodb-on-debian/)

## Getting started

You will need a few things to build the code in this repository:

* HDF5 1.14.0 or later
* CMake (3.9 or later) or the Autotools (autoconf 2.69 or later and matching automake, etc.)

### CMake Builds

1) Run ccmake or the CMake GUI and point it at a VOL-enabled HDF5 installation. You may need to switch to see HDF5\_DIR, which you'll need to set to the share/cmake directory of your install. Configure and generate.

2) Build the software using 'make', etc.

3) Run the test program using 'make test', 'ctest .', etc.
