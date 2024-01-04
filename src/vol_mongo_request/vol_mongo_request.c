#include "vol_mongo_request.h"

herr_t vol_mongo_request_wait(void* req, uint64_t timeout,
                              H5VL_request_status_t* status) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_request_notify(void* req, H5VL_request_notify_t cb,
                                void* ctx) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_request_cancel(void* req, H5VL_request_status_t* status) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_request_specific(void* req,
                                  H5VL_request_specific_args_t* args) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_request_optional(void* req, H5VL_optional_args_t* args) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_request_free(void* req) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}