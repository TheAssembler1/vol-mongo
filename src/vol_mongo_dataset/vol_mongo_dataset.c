#include "vol_mongo_dataset.h"

void* vol_mongo_dataset_create(void* obj, const H5VL_loc_params_t* loc_params,
                               const char* name, hid_t lcpl_id, hid_t type_id,
                               hid_t space_id, hid_t dcpl_id, hid_t dapl_id,
                               hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

void* vol_mongo_dataset_open(void* obj, const H5VL_loc_params_t* loc_params,
                             const char* name, hid_t dapl_id, hid_t dxpl_id,
                             void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

herr_t vol_mongo_dataset_read(size_t count, void* dset[], hid_t mem_type_id[],
                              hid_t mem_space_id[], hid_t file_space_id[],
                              hid_t dxpl_id, void* buf[], void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_datset_write(size_t count, void* dset[], hid_t mem_type_id[],
                              hid_t mem_space_id[], hid_t file_space_id[],
                              hid_t dxpl_id, const void* buf[], void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_dataset_get(void* obj, H5VL_dataset_get_args_t* args,
                             hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_dataset_specific(void* obj, H5VL_dataset_specific_args_t* args,
                                 hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_dataset_optional(void* obj, H5VL_optional_args_t* args,
                                  hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_dataset_close(void* dset, hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}