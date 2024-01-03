#include "vol_mongo_introspect.h"

herr_t vol_mongo_introspect_opt_query_pt(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags) {
  fflush(stdout);
  *flags = 0;
  return NULL;
}