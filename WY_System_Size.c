/**
 * @file WY_System_Size.c
 * Simply prints out sizes of different C/C++ data types on the OS. Amend the _OS_TYPE_ option in the Makefile to print a different OS name. 
*/
#include <stdio.h>


int main(int argc, char *argv[])
{
    #if defined _OS_TYPE_
    const char *restrict os = _OS_TYPE_;
    #else
    const char *restrict os = "Unknown OS";
    printf("_OS_TYPE_ not defined in Makefile or src. Assume Unknown OS.\n");
    #endif

    printf("%s Short size: %zd\n", os, sizeof(unsigned short));
    printf("%s Integer size: %zd\n", os, sizeof(unsigned int));
    printf("%s Long size: %zd\n", os, sizeof(unsigned long));
    printf("%s Long Long size: %zd\n", os, sizeof(unsigned long long));
    printf("%s size_t size: %zd\n", os, sizeof(size_t));
    printf("%s Pointer size: %zd\n", os, sizeof(void *));
    return 0;
}