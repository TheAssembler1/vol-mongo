#ifndef MONGO_VOL_FILE_H
#define MONGO_VOL_FILE_H

#include <hdf5.h>
#include <stdio.h>

void* vol_mongo_file_create_pt(const char* name, unsigned flags, hid_t fcpl_id,
                            hid_t fapl_id, hid_t dxpl_id, void** req) {
      return NULL;
}

herr_t vol_mongo_file_close_pt(void* file, hid_t dxpl_id, void** req) {
  return NULL;
}

herr_t vol_mongo_instrospect_opt_query_pt(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags) {
  fflush(stdout);
  *flags = 0;
  return NULL;
}

#endif
