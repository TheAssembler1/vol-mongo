#ifndef VOL_MONGO_BLOB_H
#define VOL_MONGO_BLOB_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_blob_put(void* obj, const void* buf, size_t size, void* blob_id,
              void* ctx);
herr_t  vol_mongo_blob_get(void* obj, const void* blob_id, void* buf, size_t size,
              void* ctx);
herr_t  vol_mongo_blob_specific(void* obj, void* blob_id, H5VL_blob_specific_args_t* args);
herr_t  vol_mongo_blob_optional(void* obj, void* blob_id, H5VL_optional_args_t* args);

#endif