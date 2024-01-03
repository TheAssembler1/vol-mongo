ACLOCAL_AMFLAGS = -I m4

# Adjust as needed
AM_CPPFLAGS = $(HDF5_CPPFLAGS)
AM_CFLAGS = -g -Wall -Wextra -fPIC $(HDF5_CFLAGS)

# Public header
include_HEADERS = vol_mongo_connector.h

# Template VOL connector
lib_LTLIBRARIES = libmongo_vol_connector.la
libmongo_vol_connector_la_SOURCES = mongo_vol_connector.c
libmongo_vol_connector_la_LDFLAGS = $(AM_LDFLAGS) $(HDF5_LDFLAGS) -avoid-version -module -shared -export-dynamic
libmongo_vol_connector_la_LIBADD = $(HDF5_LIBS)

