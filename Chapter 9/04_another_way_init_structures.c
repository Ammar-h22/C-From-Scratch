#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee ammar = {101, 100.45, "harry"};

    printf("Code is : %d\n", ammar.code);
    printf("Salary is : %0.2f\n", ammar.salary);
    printf("Name of the employee is : %s\n", ammar.name);
    return 0;
}

// Now if we want to initialize all the value of an employee as 0 , then we can do it in this way:

#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{
    struct employee Roshan = {0};   //---> All elements are set to 0.

    return 0;
}
