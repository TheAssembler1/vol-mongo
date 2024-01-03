#include "vol_mongo_file.h"
#include "../lwlog.h"

void* vol_mongo_file_create_pt(const char* name, unsigned flags, hid_t fcpl_id,
                            hid_t fapl_id, hid_t dxpl_id, void** req){
      return (void*)3;
}

herr_t vol_mongo_file_close_pt(void* file, hid_t dxpl_id, void** req) {
  lwlog_debug("TEST");
  return NULL;
}
