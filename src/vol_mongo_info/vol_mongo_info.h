#ifndef VOL_MONGO_INFO_H
#define VOL_MONGO_INFO_H

#include <hdf5.h>

#include "../lwlog.h"

#define VOL_MONGO_INFO_SIZE (size_t)0

void* vol_mongo_info_copy(const void* info); 
herr_t vol_mongo_info_cmp(int* cmp_value, const void* info1, const void* info2); 
herr_t vol_mongo_info_free(void* info);
herr_t vol_mongo_info_to_str(const void* info, char** str);
herr_t vol_mongo_info_from_str(const char* str, void** info); 

#endif