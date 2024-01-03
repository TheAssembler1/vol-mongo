# Set the mongo VOL connector name
set (TVC_NAME mongo_vol_connector)

# Build the mongo VOL
add_library (${TVC_NAME} SHARED vol_mongo_connector.c  vol_mongo_file/vol_mongo_file.c)
set_target_properties (${TVC_NAME} PROPERTIES VERSION ${PROJECT_VERSION})
set_target_properties (${TVC_NAME} PROPERTIES SOVERSION 1)
set_target_properties (${TVC_NAME} PROPERTIES PUBLIC_HEADER "${TVC_NAME}.h")

