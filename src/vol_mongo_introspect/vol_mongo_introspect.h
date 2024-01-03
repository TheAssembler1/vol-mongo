#ifndef VOL_MONGO_INSTROSPECT_H
#define VOL_MONGO_INSTROSPECT_H

#include <hdf5.h>

herr_t vol_mongo_introspect_opt_query_pt(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags);

#endif