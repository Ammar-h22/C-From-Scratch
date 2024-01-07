#include <stdio.h>
#include <string.h>
struct teacher
{
    int salary;
    char subject[10];
    char name[10];
};
int main()
{
    struct teacher t1;
    struct teacher *ptr1;
    ptr1 = &t1;
    strcpy((*ptr1).subject, "Chemistry");
    strcpy((*ptr1).name, "Rashmi");
    (*ptr1).salary = 25000;

    printf("%s\n",(*ptr1).name);

    
    struct teacher t2;
    struct teacher *ptr2;
    ptr2 = &t2;
    strcpy(ptr2->subject, "Chemistry");
    strcpy(ptr2->name, "Rashmi");
    ptr2->salary = 25000;

    printf("%s\n",ptr2->name);

    return 0;
}


