// Example 1:
// C program to check wether a program is even or odd:

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("%d is an even number\n", a);
    }
    else
    {

        printf("%d is an odd number\n", a);
    }
    return 0;
}
// // Example 2:
// // C program to check wether addition of 2 numbers is 10 or not:
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number : ");
    scanf("%d", &a);
    printf("Enter the Second number : ");
    scanf("%d", &b);

    if (a + b == 10)
    {
        printf("Congratulations, Your both numbers are correct");
    }
    else
    {
        printf("Sorry, Something went wrong");
    }

    return 0;
}



