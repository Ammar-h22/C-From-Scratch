#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main()
{

    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    (*ptr).code = 102; //---> Line no. 13 and 14 are the same
    ptr->code = 102;   // ---> Here (->) is known as arrow operator
    printf("%d", (*ptr).code);

    return 0;
}
