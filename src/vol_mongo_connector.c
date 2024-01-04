#include <complex.h>
#include <hdf5.h>
#include <stdlib.h>

#include "vol_mongo_connector.h"
#include "vol_mongo_helper.h"
#include "vol_mongo_init_term/vol_mongo_init_term.h"
#include "vol_mongo_file/vol_mongo_file.h"
#include "vol_mongo_introspect/vol_mongo_introspect.h"
#include "vol_mongo_info/vol_mongo_info.h"
#include "vol_mongo_wrap/vol_mongo_wrap.h"
#include "vol_mongo_attr/vol_mongo_attr.h"
#include "vol_mongo_dataset/vol_mongo_dataset.h"
#include "vol_mongo_datatype/vol_mongo_datatype.h"
#include "vol_mongo_group/vol_mongo_group.h"
#include "vol_mongo_request/vol_mongo_request.h"
#include "vol_mongo_link/vol_mongo_link.h"
#include "vol_mongo_object/vol_mongo_object.h"
#include "vol_mongo_blob/vol_mongo_blob.h"
#include "vol_mongo_token/vol_mongo_token.h"
#include "vol_mongo_optional/vol_mongo_optional.h"

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
        VOL_MONGO_INFO_SIZE,     /* size    */
        vol_mongo_info_copy,     /* copy    */
        vol_mongo_info_cmp,      /* compare */
        vol_mongo_info_free,     /* free    */
        vol_mongo_info_to_str,   /* to_str  */
        vol_mongo_info_from_str, /* from_str */
    },
    {
        /* wrap_cls */
        vol_mongo_wrap_get_object,    /* get_object   */
        vol_mongo_wrap_get_wrap_ctx,  /* get_wrap_ctx */
        vol_mongo_wrap_wrap_object,   /* wrap_object  */
        vol_mongo_wrap_unwrap_object, /* unwrap_object */
        vol_mongo_wrap_free_wrap_ctx, /* free_wrap_ctx */
    },
    {
        /* attribute_cls */
        vol_mongo_attr_create,   /* create       */
        vol_mongo_attr_open,     /* open         */
        vol_mongo_attr_read,     /* read         */
        vol_mongo_attr_write,    /* write        */
        vol_mongo_attr_get,      /* get          */
        vol_mongo_attr_specific, /* specific     */
        vol_mongo_attr_optional, /* optional     */
        vol_mongo_attr_close     /* close        */
    },
    {
        /* dataset_cls */
        vol_mongo_dataset_create, /* create       */
        vol_mongo_dataset_open, /* open         */
        vol_mongo_dataset_read, /* read         */
        vol_mongo_dataset_read, /* write        */
        vol_mongo_dataset_get, /* get          */
        vol_mongo_dataset_specific, /* specific     */
        vol_mongo_dataset_optional, /* optional     */
        vol_mongo_dataset_close  /* close        */
    },
    {
        /* datatype_cls */
        vol_mongo_datatype_commit,   /* commit       */
        vol_mongo_datatype_open,     /* open         */
        vol_mongo_datatype_get,      /* get_size     */
        vol_mongo_datatype_specific, /* specific     */
        vol_mongo_datatype_optional, /* optional     */
        vol_mongo_datatype_close     /* close        */
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
        vol_mongo_group_create,   /* create       */
        vol_mongo_group_open,     /* open         */
        vol_mongo_group_get,      /* get          */
        vol_mongo_group_specific, /* specific     */
        vol_mongo_group_optional, /* optional     */
        vol_mongo_group_close     /* close        */
    },
    {
        /* link_cls */
        vol_mongo_link_create,    /* create       */
        vol_mongo_link_copy,      /* copy         */
        vol_mongo_link_move,      /* move         */
        vol_mongo_link_get,       /* get          */
        vol_mongo_link_specific, /* specific     */
        vol_mongo_link_optional  /* optional     */
    },
    {
        /* object_cls */
        vol_mongo_object_open,     /* open         */
        vol_mongo_object_copy,     /* copy         */
        vol_mongo_object_get,      /* get          */
        vol_mongo_object_specific, /* specific     */
        vol_mongo_object_optional  /* optional     */
    },
    {
        /* introscpect_cls */
        vol_mongo_introspect_get_conn_cls,  /* get_conn_cls  */
        vol_mongo_introspect_get_cap_flags, /* get_cap_flags */
        vol_mongo_introspect_opt_query      /* opt_query     */
    },
    {
        /* request_cls */
        vol_mongo_request_wait,      /* wait         */
        vol_mongo_request_notify,    /* notify       */
        vol_mongo_request_cancel,   /* cancel       */
        vol_mongo_request_specific, /* specific     */
        vol_mongo_request_optional, /* optional     */
        vol_mongo_request_free     /* free         */
    },
    {
        /* blob_cls */
        vol_mongo_blob_put,      /* put          */
        vol_mongo_blob_get,      /* get          */
        vol_mongo_blob_specific, /* specific     */
        vol_mongo_blob_optional  /* optional     */
    },
    {
        /* token_cls */
        vol_mongo_token_cmp,      /* cmp          */
        vol_mongo_token_to_str,   /* to_str       */
        vol_mongo_token_from_str  /* from_str     */
    },
    vol_mongo_optional /* optional     */
};

H5PL_type_t H5PLget_plugin_type() { 
    lwlog_trace();
    return H5PL_TYPE_VOL; 
}

const void* H5PLget_plugin_info() { 
    lwlog_trace();
    return &vol_mongo_connector; 
}
