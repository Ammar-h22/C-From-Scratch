//  Fibonacci sequence, such that each number is the sum of the two preceding ones,
//  starting from 0 and 1. That is, and for n > 1. The sequence starts: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

#include <stdio.h>
int fibonacci(int x);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("The value of n for fibonacci series is : %d",fibonacci(n));
    return 0;
}

int fibonacci(int x)
{
    if (x == 1)
        return 0;
    if (x == 2)
        return 1;
    else
        return fibonacci(x - 1) + fibonacci(x - 2);
}

