#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++) //Search until end of table
    {
        if(ptr->number == targetNumber)
        {
            return(PtrToEmployee) ptr; //Return location of number to user
        }
    }
    return NULL; //If no employee number matches in above loop
}


//Essentially the same functionality as above but comparing strings to check if equal
PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->name, targetName) == 0)
        {
            return (PtrToEmployee) ptr;
        }
    }

    return NULL;
}

//Check for phone number.
PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char * targetPhone)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++)
    {
        if(strcmp(ptr->phone, targetPhone) == 0)
        {
            return (PtrToEmployee) ptr;
        }
    }

    return NULL;
}

//Check for salary.
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++)
    {
        if(ptr->salary == targetSalary)
        {
            return (PtrToEmployee) ptr;
        }
    }

    return NULL;
}