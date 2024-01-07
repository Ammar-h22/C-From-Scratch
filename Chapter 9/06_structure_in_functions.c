#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e1)
{
    printf("The code of the employee is : %d\n", e1.code);
    printf("The salary of the employee is : %0.2f\n", e1.salary);
    printf("The name of the employee is : %s\n", e1.name);
}
int main()
{
    struct employee e1;
    e1.code = 102;
    e1.salary = 234.33;
    strcpy(e1.name, "Ammar");

    show(e1);

    return 0;
}
