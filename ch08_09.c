//
//  ch08_09.c
//
#include <stdio.h>

//#define WINDOWS
#define UNIX

#ifdef WINDOWS
    const char systemFilePathName[] = "c:\\program files\\my_system\\system.dat";
    #ifdef UNIX
        #error defined mulitple O.S.
    #endif
#elif defined(UNIX)
    const char systemFilePathName[] = "/opt/my_system/system.dat";
#else
    #error Undefined operating system
#endif

int main() {
    printf("System File Path Name = %s\n", systemFilePathName);
}