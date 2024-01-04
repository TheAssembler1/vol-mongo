#include "vol_mongo_wrap.h"

void* vol_mongo_wrap_get_object(const void* obj) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

herr_t vol_mongo_wrap_get_wrap_ctx(const void* obj, void** wrap_ctx) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

void* vol_mongo_wrap_wrap_object(void* obj, H5I_type_t obj_type, void* wrap_ctx){
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

void* vol_mongo_wrap_unwrap_object(void* obj) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return (void*)1;
}

herr_t vol_mongo_wrap_free_wrap_ctx(void* wrap_ctx) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}