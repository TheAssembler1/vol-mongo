#ifndef VOL_MONGO_DATATYPE_H
#define VOL_MONGO_DATATYPE_H

#include <hdf5.h>

#include "../lwlog.h"

void* vol_mongo_datatype_commit(void* obj, const H5VL_loc_params_t* loc_params,
                const char* name, hid_t type_id, hid_t lcpl_id, hid_t tcpl_id,
                hid_t tapl_id, hid_t dxpl_id, void** req);
void* vol_mongo_datatype_open(void* obj, const H5VL_loc_params_t* loc_params, const char* name,
              hid_t tapl_id, hid_t dxpl_id, void** req);
herr_t vol_mongo_datatype_get(void* obj, H5VL_datatype_get_args_t* args, hid_t dxpl_id,
              void** req);
herr_t vol_mongo_datatype_specific(void* obj, H5VL_datatype_specific_args_t* args,
                   hid_t dxpl_id, void** req);
herr_t vol_mongo_datatype_optional(void* obj, H5VL_optional_args_t* args, hid_t dxpl_id,
                   void** req);
herr_t vol_mongo_datatype_close(void* dt, hid_t dxpl_id, void** req);

#endif