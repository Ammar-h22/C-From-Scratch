// here we can see that the value of 'a' will not increment by 10 because here 
// we have not given the address and we have done call by value and not call by refrence.

#include <stdio.h>
void ReName(int a)
{
    a += 10;
}

int main()
{
    int i = 25;

    printf("The value of variable i is : %d\n", i);
    ReName(i);
    printf("The value of variable i is : %d\n", i);
    return 0;
}

// This is the right program in which we have done call by refrence.

#include <stdio.h>
void ReName(int *a)
{
   *a += 10;
}

int main()
{
    int i = 25;
    printf("The value of variable i is : %d\n", i);
    ReName(&i);
    printf("The value of variable i is : %d\n", i);

    return 0;
}
