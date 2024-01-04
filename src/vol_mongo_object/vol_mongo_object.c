#include "vol_mongo_object.h"

void* vol_mongo_object_open(void* obj, const H5VL_loc_params_t* loc_params,
                            H5I_type_t* opened_type, hid_t dxpl_id,
                            void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

herr_t vol_mongo_object_copy(void* src_obj,
                             const H5VL_loc_params_t* loc_params1,
                             const char* src_name, void* dst_obj,
                             const H5VL_loc_params_t* loc_params2,
                             const char* dst_name, hid_t ocpypl_id,
                             hid_t lcpl_id, hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR_ERROR();
  return NULL;
}

herr_t vol_mongo_object_get(void* obj, const H5VL_loc_params_t* loc_params,
                            H5VL_object_get_args_t* args, hid_t dxpl_id,
                            void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR_ERROR();
  return NULL;
}

herr_t vol_mongo_object_specific(void* obj, const H5VL_loc_params_t* loc_params,
                                 H5VL_object_specific_args_t* args,
                                 hid_t dxpl_id, void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR_ERROR();
  return NULL;
}

herr_t vol_mongo_object_optional(void* obj, const H5VL_loc_params_t* loc_params,
                                 H5VL_optional_args_t* args, hid_t dxpl_id,
                                 void** req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR_ERROR();
  return NULL;
}