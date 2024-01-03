#ifndef MONGO_VOL_FILE_H
#define MONGO_VOL_FILE_H

#include <hdf5.h>
#include <stdio.h>

#include "../lwlog.h"

/*
    void *(*create)(const char *name, unsigned flags, hid_t fcpl_id, hid_t fapl_id, hid_t dxpl_id,
                    void **req);
    void *(*open)(const char *name, unsigned flags, hid_t fapl_id, hid_t dxpl_id, void **req);
    herr_t (*get)(void *obj, H5VL_file_get_args_t *args, hid_t dxpl_id, void **req);
    herr_t (*specific)(void *obj, H5VL_file_specific_args_t *args, hid_t dxpl_id, void **req);
    herr_t (*optional)(void *obj, H5VL_optional_args_t *args, hid_t dxpl_id, void **req);
    herr_t (*close)(void *file, hid_t dxpl_id, void **req);
*/
void* vol_mongo_file_create(const char* name, unsigned flags, hid_t fcpl_id,
                            hid_t fapl_id, hid_t dxpl_id, void** req);
void* vol_mongo_file_open(const char* name, unsigned flags, hid_t fapl_id, hid_t dxpl_id, void** req);
herr_t vol_mongo_file_get(void *obj, H5VL_file_get_args_t *args, hid_t dxpl_id, void **req);
herr_t vol_mongo_file_specific(void *obj, H5VL_file_specific_args_t *args, hid_t dxpl_id, void **req);
herr_t vol_mongo_file_optional(void *obj, H5VL_optional_args_t *args, hid_t dxpl_id, void **req);
herr_t vol_mongo_file_close(void* file, hid_t dxpl_id, void** req);

#endif
