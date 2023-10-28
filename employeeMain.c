#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void){ 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
//New Methods
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;
    PtrToEmployee matchPtr;

//NEW TEST CASES
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "213-555-1212");
    if(matchPtr != NULL)
        printf("Employee Phone 213-555-1212 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone 213-555-1212 is NOT found in record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "123-456-7890");
    if(matchPtr != NULL)
        printf("Employee Phone 123-456-7890 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Phone 123-456-7890 is NOT found in record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80);
    if(matchPtr != NULL)
        printf("Employee Salary 7.80 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary 7.80 is NOT found in record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 91.4);
    if(matchPtr != NULL)
        printf("Employee Salary 91.4 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Salary 91.4 is NOT found in record\n");

    return EXIT_SUCCESS;
} 