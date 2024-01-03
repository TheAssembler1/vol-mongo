#ifndef VOL_MONGO_INTROSPECT_H
#define VOL_MONGO_INTROSPECT_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_introspect_opt_query(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags);

#endif