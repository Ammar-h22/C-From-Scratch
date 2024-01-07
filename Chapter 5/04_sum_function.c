#include <stdio.h>
// sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b);
int main()
{
    int c;
    c = sum(10, 4); // Function call
    printf("The value of c is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
