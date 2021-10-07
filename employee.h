#include <stdio.h>
#include <stddef.h>

typedef struct
{
    long number;
    char *name;
    char *phone;
    double salaray;
}   Employee, *PtrToEmployee;

typedef const Employee *PtrToConstEmployee;