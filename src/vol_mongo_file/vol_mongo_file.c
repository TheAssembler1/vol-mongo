#include "vol_mongo_file.h"

void* vol_mongo_file_create(const char* name, unsigned flags, hid_t fcpl_id,
                               hid_t fapl_id, hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

void* vol_mongo_file_open(const char* name, unsigned flags, hid_t fapl_id, hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

herr_t vol_mongo_file_get(void *obj, H5VL_file_get_args_t *args, hid_t dxpl_id, void **req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_file_specific(void *obj, H5VL_file_specific_args_t *args, hid_t dxpl_id, void **req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_file_optional(void *obj, H5VL_optional_args_t *args, hid_t dxpl_id, void **req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR_ERROR();
  return NULL;
}

herr_t vol_mongo_file_close(void* file, hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}
