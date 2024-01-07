#include <stdio.h>

int main()
{
    int i, factorial = 1, number;
    printf("Enter the number : ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", number, factorial);

    return 0;
}

//  Or
// We can also do this program by using while loop.
// For example:

// #include <stdio.h>
// int main()
// {
//     int i = 1, factorial = 1, number;
//     printf("Enter the number : ");
//     scanf("%d", &number);
//     while (i <= number)
//     {
//         factorial *= i;
//         i++;
//     }
//     printf("The factorial of %d is %d", number, factorial);

//     return 0;
// }
