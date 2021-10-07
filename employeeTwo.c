#include <string.h>
#include "employee.h"

/*
ptr - points to table to be searched
tablesize  - size of the table
targetPtr - points to value that will be searched for in table
functionPtr - points to a comparison function below and will perform the associated check
*/

static PtrToEmployee searchEmployeeTable(PtrToConstEmployee ptr, int tableSize, const void *targetPtr,
                                        int (*functionPtr)(const void *, PtrToConstEmployee))
{
    PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++)
        if ((*functionPtr)(targetPtr, ptr) == 0 )
        {
            return (PtrToEmployee) ptr;
        }
    return NULL;
}