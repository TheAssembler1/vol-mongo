#ifndef VOL_MONGO_WRAP_H
#define VOL_MONGO_WRAP_H

#include <hdf5.h>

#include "../lwlog.h"

void* vol_mongo_wrap_get_object(const void* obj);
herr_t vol_mongo_wrap_get_wrap_ctx(const void* obj, void** wrap_ctx);
void* vol_mongo_wrap_wrap_object(void* obj, H5I_type_t obj_type, void* wrap_ctx);
void* vol_mongo_wrap_unwrap_object(void* obj);
herr_t vol_mongo_wrap_free_wrap_ctx(void* wrap_ctx);

#endif