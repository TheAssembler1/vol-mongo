#ifndef VOL_MONGO_OPTIONAL_H
#define VOL_MONGO_OPTIONAL_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_optional(void* obj, H5VL_optional_args_t* args, hid_t dxpl_id,
                          void** req);

#endif