#include "vol_mongo_blob.h"

herr_t vol_mongo_blob_put(void* obj, const void* buf, size_t size,
                          void* blob_id, void* ctx) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_blob_get(void* obj, const void* blob_id, void* buf,
                          size_t size, void* ctx) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_blob_specific(void* obj, void* blob_id,
                               H5VL_blob_specific_args_t* args) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_blob_optional(void* obj, void* blob_id,
                               H5VL_optional_args_t* args) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}