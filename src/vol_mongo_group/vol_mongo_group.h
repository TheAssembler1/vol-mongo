#ifndef VOL_MONGO_GROUP_H
#define VOL_MONGO_GROUP_H

#include <hdf5.h>

#include "../lwlog.h"

void* vol_mongo_group_create(void* obj, const H5VL_loc_params_t* loc_params,
                const char* name, hid_t lcpl_id, hid_t gcpl_id, hid_t gapl_id,
                hid_t dxpl_id, void** req);
void* vol_mongo_group_open(void* obj, const H5VL_loc_params_t* loc_params, const char* name,
              hid_t gapl_id, hid_t dxpl_id, void** req);
herr_t vol_mongo_group_get(void* obj, H5VL_group_get_args_t* args, hid_t dxpl_id,
              void** req);
herr_t vol_mongo_group_specific(void* obj, H5VL_group_specific_args_t* args, hid_t dxpl_id,
                   void** req);
herr_t vol_mongo_group_optional(void* obj, H5VL_optional_args_t* args, hid_t dxpl_id,
                   void** req);
herr_t vol_mongo_group_close(void* grp, hid_t dxpl_id, void** req);

#endif