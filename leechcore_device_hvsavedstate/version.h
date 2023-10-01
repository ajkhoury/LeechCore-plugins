#ifndef STRINGIZE
#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)
#endif

#define VERSION_MAJOR               2
#define VERSION_MINOR               16
#define VERSION_REVISION            4
#define VERSION_BUILD               55

#define VER_FILE_DESCRIPTION_STR    "LeechCorePlugin : HvSavedState"
#define VER_FILE_VERSION            VERSION_MAJOR, VERSION_MINOR, VERSION_REVISION, VERSION_BUILD
#define VER_FILE_VERSION_STR        STRINGIZE(VERSION_MAJOR)        \
                                    "." STRINGIZE(VERSION_MINOR)    \
                                    "." STRINGIZE(VERSION_REVISION) \
                                    "." STRINGIZE(VERSION_BUILD)    \

#define VER_COMPANY_NAME_STR        ""
#define VER_PRODUCTNAME_STR         "LeechCorePluginHvSavedState"
#define VER_PRODUCT_VERSION         VER_FILE_VERSION
#define VER_PRODUCT_VERSION_STR     VER_FILE_VERSION_STR
#define VER_ORIGINAL_FILENAME_STR   VER_PRODUCTNAME_STR ".dll"
#define VER_INTERNAL_NAME_STR       VER_ORIGINAL_FILENAME_STR
#define VER_COPYRIGHT_STR           "Copyright (c) Please See Source Code"
