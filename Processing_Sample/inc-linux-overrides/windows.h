// Things here are generally for main.c, but are used in other places too
#define __STDC_LIB_EXT1__ 1
#include <unistd.h>
#include <string.h>
#define min(a,b) ((a) < (b) ? (a) : (b))
#define max(a,b) ((a) > (b) ? (a) : (b))
#define Sleep usleep
#define sprintf_s snprintf
#define strcat_s strncat_s
#define TRUE 1
#define FALSE 0
#define _countof(a) (sizeof(a)/sizeof(*a))
#define MAX_PATH (int)1024
#define BOOL int
typedef void* HWND;

#define _O_RDONLY      0
#define _O_WRONLY      1
#define _O_RDWR        2

#define sprintf_s snprintf
#define strcpy_s TODO

typedef unsigned int DWORD;

// GLFW: uses HWND
