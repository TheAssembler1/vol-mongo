#include "vol_mongo_connector.h"
#include "vol_mongo_file/vol_mongo_file.h"

#include <complex.h>
#include <hdf5.h>
#include <stdlib.h>

herr_t vol_mongo_file_close_pt(void* file, hid_t dxpl_id, void** req) {
  return NULL;
}

herr_t vol_mongo_instrospect_opt_query_pt(void* obj, H5VL_subclass_t subcls,
                                       int opt_type, uint64_t* flags) {
  fflush(stdout);
  *flags = 0;
  return NULL;
}

static const H5VL_class_t vol_mongo_connector = {
    3,                            /* VOL class struct version */
    MONGO_VOL_CONNECTOR_VALUE, /* value                    */
    MONGO_VOL_CONNECTOR_NAME,  /* name                     */
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
        vol_mongo_file_create_pt,  /* create       */
        NULL,                      /* open         */
        NULL,                      /* get          */
        NULL,                      /* specific     */
        NULL,                      /* optional     */
        vol_mongo_file_close_pt    /* close        */
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
        vol_mongo_instrospect_opt_query_pt /* opt_query     */
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

H5PL_type_t H5PLget_plugin_type() { 
    return H5PL_TYPE_VOL; 
}

const void* H5PLget_plugin_info() { 
    return &vol_mongo_connector; 
}
