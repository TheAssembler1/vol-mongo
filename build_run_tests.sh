cd build
../configure --with-hdf5=/usr/local/hdf5/bin/h5cc
make check
cat test/test_vol_plugin.sh.log
cd ..
