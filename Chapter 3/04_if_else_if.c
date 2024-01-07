
// Example 1:
#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);

    if (age >= 90)
    {
        printf("Sorry, you can't drive");
    }
    else if (age <= 18)
    {
        printf("Sorry, you can't drive");
    }
    else
    {
        printf("Okay, you can drive");
    }
    return 0;
}

// Example 2:

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("Your number is 1");
    }
    else if (num == 2)
    {
        printf("your number is 2");
    }
    else if (num == 3)
    {
        printf("Your number is 3");
    }
    else
    {
        printf("Sorry, your number is not 1, 2 or 3");
    }
    return 0;
}
