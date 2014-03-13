#include "opensslconf.h"

void * openssl_fips_ers_dummy = &openssl_fips_ers_dummy;
#ifdef OPENSSL_FIPS
# include "fips_err.h"
#else
static void *dummy=&dummy;
#endif
