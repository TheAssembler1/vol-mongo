/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Purpose:     A simple virtual object layer (VOL) connector with almost no
 *              functionality that can serve as a template for creating other
 *              connectors.
 */

/* This connector's header */
#include "H5VLpublic.h"
#include "template_vol_connector.h"

#include <H5PLextern.h>
#include <complex.h>
#include <hdf5.h>
#include <stdlib.h>

/*
typedef struct H5VL_file_class_t {
    void *(*create)(const char *name, unsigned flags, hid_t fcpl_id, hid_t
fapl_id, hid_t dxpl_id, void **req); void *(*open)(const char *name, unsigned
flags, hid_t fapl_id, hid_t dxpl_id, void **req); herr_t (*get)(void *obj,
H5VL_file_get_args_t *args, hid_t dxpl_id, void **req); herr_t (*specific)(void
*obj, H5VL_file_specific_args_t *args, hid_t dxpl_id, void **req); herr_t
(*optional)(void *obj, H5VL_optional_args_t *args, hid_t dxpl_id, void **req);
    herr_t (*close)(void *file, hid_t dxpl_id, void **req);
} H5VL_file_class_t;
*/

void* vol_mongo_file_create(const char* name, unsigned flags, hid_t fcpl_id,
                            hid_t fapl_id, hid_t dxpl_id, void** req) {
  fflush(stdout);
  return (void*)1;
}

herr_t vol_mongo_file_close(void* file, hid_t dxpl_id, void** req) {
  return NULL;
}

herr_t vol_mongo_instrospect_opt_query(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags) {
  fflush(stdout);
  *flags = 0;
  return NULL;
}

/* The VOL class struct */
static const H5VL_class_t template_class_g = {
    3,                            /* VOL class struct version */
    TEMPLATE_VOL_CONNECTOR_VALUE, /* value                    */
    TEMPLATE_VOL_CONNECTOR_NAME,  /* name                     */
    1,                            /* version                  */
    0,                            /* capability flags         */
    NULL,                         /* initialize               */
    NULL,                         /* terminate                */
    {
        /* info_cls */
        (size_t)0, /* size    */
        NULL,      /* copy    */
        NULL,      /* compare */
        NULL,      /* free    */
        NULL,      /* to_str  */
        NULL,      /* from_str */
    },
    {
        /* wrap_cls */
        NULL, /* get_object   */
        NULL, /* get_wrap_ctx */
        NULL, /* wrap_object  */
        NULL, /* unwrap_object */
        NULL, /* free_wrap_ctx */
    },
    {
        /* attribute_cls */
        NULL, /* create       */
        NULL, /* open         */
        NULL, /* read         */
        NULL, /* write        */
        NULL, /* get          */
        NULL, /* specific     */
        NULL, /* optional     */
        NULL  /* close        */
    },
    {
        /* dataset_cls */
        NULL, /* create       */
        NULL, /* open         */
        NULL, /* read         */
        NULL, /* write        */
        NULL, /* get          */
        NULL, /* specific     */
        NULL, /* optional     */
        NULL  /* close        */
    },
    {
        /* datatype_cls */
        NULL, /* commit       */
        NULL, /* open         */
        NULL, /* get_size     */
        NULL, /* specific     */
        NULL, /* optional     */
        NULL  /* close        */
    },
    {
        /* file_cls */
        vol_mongo_file_create, /* create       */
        NULL,                  /* open         */
        NULL,                  /* get          */
        NULL,                  /* specific     */
        NULL,                  /* optional     */
        vol_mongo_file_close   /* close        */
    },
    {
        /* group_cls */
        NULL, /* create       */
        NULL, /* open         */
        NULL, /* get          */
        NULL, /* specific     */
        NULL, /* optional     */
        NULL  /* close        */
    },
    {
        /* link_cls */
        NULL, /* create       */
        NULL, /* copy         */
        NULL, /* move         */
        NULL, /* get          */
        NULL, /* specific     */
        NULL  /* optional     */
    },
    {
        /* object_cls */
        NULL, /* open         */
        NULL, /* copy         */
        NULL, /* get          */
        NULL, /* specific     */
        NULL  /* optional     */
    },
    {
        /* introscpect_cls */
        NULL,                           /* get_conn_cls  */
        NULL,                           /* get_cap_flags */
        vol_mongo_instrospect_opt_query /* opt_query     */
    },
    {
        /* request_cls */
        NULL, /* wait         */
        NULL, /* notify       */
        NULL, /* cancel       */
        NULL, /* specific     */
        NULL, /* optional     */
        NULL  /* free         */
    },
    {
        /* blob_cls */
        NULL, /* put          */
        NULL, /* get          */
        NULL, /* specific     */
        NULL  /* optional     */
    },
    {
        /* token_cls */
        NULL, /* cmp          */
        NULL, /* to_str       */
        NULL  /* from_str     */
    },
    NULL /* optional     */
};

/* These two functions are necessary to load this plugin using
 * the HDF5 library.
 */
H5PL_type_t H5PLget_plugin_type() { return H5PL_TYPE_VOL; }

const void* H5PLget_plugin_info() { return &template_class_g; }
