//gcc employeeMain.c employeeTable.c employeeOne.c
//gcc employeeMain.c employeeTable.c employeeTwo.c
#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void) 
{
    //defined in employeOne.c or employeeTwo.c
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeebyName(const Employee table[], int sizeTable, char * nameToFind);

    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double phoneToFind);


    //defined in employeeTable.c
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    /* Please note the demonstration samples from Lecture 12 ("Number" and "Name" search)
    have been removed for the sake of making the actual assignment code more distinguishable */



    PtrToEmployee matchPtr; //Declaration
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");



    //Example of Phone Found
    if (matchPtr != NULL)
    {
        printf("\nEmployee with phone number: 310-555-1215 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("\nEmployee with phone number: 310-555-1215 is NOT found in the record\n");
    }



    //Example of Phone Not Found

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-545-3359");

    if (matchPtr != NULL)
    {
        printf("\nEmployee with phone number: 310-545-3359 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("\nEmployee with phone number: 310-545-3359 is NOT found in the record\n");
    }




    //Example of Salary Found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50);

    if (matchPtr != NULL)
    {
        printf("\nEmployee with salary $4.50 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("\nEmployee with salary $4.50 is NOT found in the record\n");
    }



    //Example of Salary Not Found

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 10.50);

    if (matchPtr != NULL)
    {
        printf("\nEmployee with salary $10.50 is in record %d\n", matchPtr - EmployeeTable);
    }
    else
    {
        printf("\nEmployee with salary $10.50 is NOT found in the record\n");
    }
}
