./restore.sh
./autogen.sh
cd build
../configure --with-hdf5=/usr/local/hdf5/bin/h5cc
make
./test/test_vol_plugin.sh
cd ..
