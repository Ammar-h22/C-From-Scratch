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

    else
    {
        printf("Okay, you can drive");
    }
    return 0;
}
