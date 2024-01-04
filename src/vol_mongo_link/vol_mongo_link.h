#ifndef VOL_MONGO_LINK_H
#define VOL_MONGO_LINK_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_link_create(H5VL_link_create_args_t* args, void* obj,
                             const H5VL_loc_params_t* loc_params, hid_t lcpl_id,
                             hid_t lapl_id, hid_t dxpl_id, void** req);
herr_t vol_mongo_link_copy(void* src_obj, const H5VL_loc_params_t* loc_params1,
                           void* dst_obj, const H5VL_loc_params_t* loc_params2,
                           hid_t lcpl_id, hid_t lapl_id, hid_t dxpl_id,
                           void** req);
herr_t vol_mongo_link_move(void* src_obj, const H5VL_loc_params_t* loc_params1,
                           void* dst_obj, const H5VL_loc_params_t* loc_params2,
                           hid_t lcpl_id, hid_t lapl_id, hid_t dxpl_id,
                           void** req);
herr_t vol_mongo_link_get(void* obj, const H5VL_loc_params_t* loc_params,
                          H5VL_link_get_args_t* args, hid_t dxpl_id,
                          void** req);
herr_t vol_mongo_link_specific(void* obj, const H5VL_loc_params_t* loc_params,
                               H5VL_link_specific_args_t* args, hid_t dxpl_id,
                               void** req);
herr_t vol_mongo_link_optional(void* obj, const H5VL_loc_params_t* loc_params,
                               H5VL_optional_args_t* args, hid_t dxpl_id,
                               void** req);

#endif