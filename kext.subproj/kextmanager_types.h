#ifndef __KEXT_TYPES_H__
#define __KEXT_TYPES_H__

#include <mach/mach_types.h>    // allows to compile standalone
#include <mach/kmod.h>
#include <sys/param.h>

#define KEXTD_SERVER_NAME       "com.apple.KernelExtensionServer"
#define DEVMAXPATHSIZE          128       // from miscfs/devfs/devfsdefs.h :P

typedef int kext_result_t;
typedef char kext_bundle_id_t[KMOD_MAX_NAME];
typedef char posix_path_t[MAXPATHLEN];
typedef char dev_path_t[DEVMAXPATHSIZE];
typedef char property_key_t[128];
typedef char * xmlDataOut_t;
typedef char * xmlDataIn_t;

#endif __KEXT_TYPES_H__
