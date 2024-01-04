#include "vol_mongo_introspect.h"

herr_t vol_mongo_introspect_get_conn_cls(void *obj, H5VL_get_conn_lvl_t lvl, const struct H5VL_class_t **conn_cls) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_introspect_get_cap_flags(const void *info, uint64_t *cap_flags) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_introspect_opt_query(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags) {
  lwlog_trace();
  *flags = 0;
  return NULL;
}