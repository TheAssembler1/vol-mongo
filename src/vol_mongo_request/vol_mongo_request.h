#ifndef VOL_MONGO_REQUEST_H
#define VOL_MONGO_REQUEST_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_request_wait(void* req, uint64_t timeout, H5VL_request_status_t* status);
herr_t vol_mongo_request_notify(void* req, H5VL_request_notify_t cb, void* ctx);
herr_t vol_mongo_request_cancel(void* req, H5VL_request_status_t* status);
herr_t vol_mongo_request_specific(void* req, H5VL_request_specific_args_t* args);
herr_t vol_mongo_request_optional(void* req, H5VL_optional_args_t* args);
herr_t vol_mongo_request_free(void* req);

#endif