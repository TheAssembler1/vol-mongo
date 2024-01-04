#include "vol_mongo_token.h"

herr_t vol_mongo_token_cmp(void* obj, const H5O_token_t* token1,
                           const H5O_token_t* token2, int* cmp_value) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_token_to_str(void* obj, H5I_type_t obj_type,
                              const H5O_token_t* token, char** token_str) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}

herr_t vol_mongo_token_from_str(void* obj, H5I_type_t obj_type,
                                const char* token_str, H5O_token_t* token) {
  lwlog_trace();
  UNIMPLEMENTED_ERROR();
  return NULL;
}