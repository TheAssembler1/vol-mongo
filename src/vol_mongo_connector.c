#include "vol_mongo_connector.h"
#include "vol_mongo_helper.h"
#include "vol_mongo_init_term/vol_mongo_init_term.h"
#include "vol_mongo_file/vol_mongo_file.h"
#include "vol_mongo_introspect/vol_mongo_introspect.h"

#include <complex.h>
#include <hdf5.h>
#include <stdlib.h>

static const H5VL_class_t vol_mongo_connector = {
    VOL_MONGO_CLASS_STRUCT_VERSION, /* VOL class struct version */
    VOL_MONGO_CONNECTOR_VALUE,      /* value                    */
    VOL_MONGO_CONNECTOR_NAME,       /* name                     */
    VOL_MONGO_VERSION,              /* version                  */
    VOL_MONGO_CAPABILITY_FLAGS,     /* capability flags         */
    vol_mongo_initialize,           /* initialize               */
    vol_mongo_terminate,            /* terminate                */
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
        vol_mongo_file_create,   /* create       */
        vol_mongo_file_open,     /* open         */
        vol_mongo_file_get,      /* get          */
        vol_mongo_file_specific, /* specific     */
        vol_mongo_file_optional, /* optional     */
        vol_mongo_file_close     /* close        */
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
        vol_mongo_introspect_opt_query  /* opt_query     */
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
    lwlog_trace();
    return H5PL_TYPE_VOL; 
}

const void* H5PLget_plugin_info() { 
    lwlog_trace();
    return &vol_mongo_connector; 
}
