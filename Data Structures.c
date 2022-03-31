#include <stdio.h>

struct employee
{
    int empno, salary;
    char empname[30], departmentname[30];
};

int main()
{
    struct employee e;

    printf("Enter the employee's number': ");
    scanf("%d", &e.empno);

    printf("Enter the name of the Employee: ");
    getchar();
    fgets(e.empname, 30, stdin);

    printf("Enter the department of the Employee: ");
    fgets(e.departmentname, 30, stdin);

    printf("Enter the salary of the Employee: ");
    scanf("%d", &e.salary);

    printf("\nEmployee Details:\n");
    printf("Employee No: %d\n", e.empno);
    printf("Employee Name: %s", e.empname);
    printf("Employee department: %s", e.departmentname);
    printf("Employee salary: %d\n", e.salary);

    return 0;
}
