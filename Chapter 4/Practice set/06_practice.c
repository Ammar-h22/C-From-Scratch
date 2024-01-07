#include <stdio.h>

int main()
{
    int i, prime, number;
    printf("Enter the number : ");
    scanf("%d", &number);
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = 1;
            break;
        }
    }

    if (prime == 1)
    {
        printf("%d is not a prime number", number);
    }

    else
    {
        printf("%d is a prime number", number);
        return 0;
    }
}
