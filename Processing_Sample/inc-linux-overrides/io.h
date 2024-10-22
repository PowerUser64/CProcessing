// replace io.h
// https://stackoverflow.com/a/64092929/11162605
#ifdef _WIN32
    #include <io.h>
#elif __linux__
    #include <inttypes.h>
    #include <unistd.h>
    #define __int64 int64_t
    #define _close close
    #define _read read
    #define _lseek64 lseek64
    #define _O_RDONLY O_RDONLY
    #define _open open
    #define _lseeki64 lseek64
    #define _lseek lseek
    #define stricmp strcasecmp

    #define _mkdir(p) mkdir(p, 0x777)
    #define _access TODO
#endif

//SAF_Handle.cpp line:458 old line:INFILE = _open(infilename, _O_RDONLY | _O_BINARY);
// #ifdef __linux__
//   INFILE = _open(infilename, _O_RDONLY);
// #elif
//   INFILE = _open(infilename, _O_RDONLY | _O_BINARY);
// #endif
