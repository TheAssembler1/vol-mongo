#include "vol_mongo_attr.h"

void* vol_mongo_attr_create(void* obj, const H5VL_loc_params_t* loc_params,
                            const char* attr_name, hid_t type_id,
                            hid_t space_id, hid_t acpl_id, hid_t aapl_id,
                            hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

void* vol_mongo_attr_open(void* obj, const H5VL_loc_params_t* loc_params,
                          const char* attr_name, hid_t aapl_id, hid_t dxpl_id,
                          void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

herr_t vol_mongo_attr_read(void* attr, hid_t mem_type_id, void* buf,
                           hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_attr_write(void* attr, hid_t mem_type_id, const void* buf,
                            hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_attr_get(void* obj, H5VL_attr_get_args_t* args, hid_t dxpl_id,
                          void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_attr_specific(void* obj, const H5VL_loc_params_t* loc_params,
                               H5VL_attr_specific_args_t* args, hid_t dxpl_id,
                               void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_attr_optional(void* obj, H5VL_optional_args_t* args,
                               hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_attr_close(void* attr, hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}