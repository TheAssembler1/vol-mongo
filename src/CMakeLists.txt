# Set the mongo VOL connector name
set (TVC_NAME mongo_vol_connector)

# Build the mongo VOL

add_library (${TVC_NAME} SHARED vol_mongo_connector.c  
                                vol_mongo_file/vol_mongo_file.c 
                                vol_mongo_introspect/vol_mongo_introspect.c 
                                vol_mongo_init_term/vol_mongo_init_term.c
                                vol_mongo_info/vol_mongo_info.c
                                vol_mongo_wrap/vol_mongo_wrap.c
                                vol_mongo_attr/vol_mongo_attr.c
                                vol_mongo_dataset/vol_mongo_dataset.c
                                vol_mongo_datatype/vol_mongo_datatype.c
                                vol_mongo_group/vol_mongo_group.c
                                vol_mongo_request/vol_mongo_request.c
                                vol_mongo_link/vol_mongo_link.c
                                vol_mongo_object/vol_mongo_object.c
                                vol_mongo_blob/vol_mongo_blob.c
                                vol_mongo_token/vol_mongo_token.c
                                vol_mongo_optional/vol_mongo_optional.c)
set_target_properties (${TVC_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties (${TVC_NAME} PROPERTIES SOVERSION 1)
set_target_properties (${TVC_NAME} PROPERTIES PUBLIC_HEADER "${TVC_NAME}.h")

