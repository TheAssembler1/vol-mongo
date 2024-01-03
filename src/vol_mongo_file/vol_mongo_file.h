#ifndef MONGO_VOL_FILE_H
#define MONGO_VOL_FILE_H

#include <hdf5.h>
#include <stdio.h>

void* vol_mongo_file_create_pt(const char* name, unsigned flags, hid_t fcpl_id,
                            hid_t fapl_id, hid_t dxpl_id, void** req);

#endif
