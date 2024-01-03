#ifndef VOL_MONGO_INIT_TERM_H
#define VOL_MONGO_INIT_TERM_H

#include <hdf5.h>

#include "../lwlog.h"

herr_t vol_mongo_initialize(hid_t vipl_id); 
herr_t vol_mongo_terminate(void);  

#endif