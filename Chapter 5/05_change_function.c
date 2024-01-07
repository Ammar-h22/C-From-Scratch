#include <stdio.h>
void change(int b);

int main()
{
    int b = 241;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b after change is %d\n", b);

    return 0;
}
void change(int b)
{
    b = 77;
}


// So as we can see in this program that we have implemented  
// change function , but the value of b did not change
// because as we know that both the b are different.
//So this is very important to understand.