#ifndef VOL_MONGO_INTROSPECT_H
#define VOL_MONGO_INTROSPECT_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_introspect_get_conn_cls(void *obj, H5VL_get_conn_lvl_t lvl, const struct H5VL_class_t **conn_cls);
herr_t vol_mongo_introspect_get_cap_flags(const void *info, uint64_t *cap_flags);
herr_t vol_mongo_introspect_opt_query(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags);

#endif