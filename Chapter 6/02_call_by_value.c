#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x = 10, y = 8;
    printf("The value of x and y is %d and %d\n", x, y);
    printf("The value of 10+8 is : %d\n", sum(x, y));
    printf("The value of x and y after function call is %d and %d\n", x, y);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 134;
    b = 423;
    return c;
}

//  So as we can see that even after changing the value of a and b , values have not 
// changed , it is because variables of function does not change the values of main function .