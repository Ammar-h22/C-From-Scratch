#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);

    if (age<= 90 && age>=18)   //----> && this means (and) in C
    {
        printf("Okay, you can drive");
    }

    else
    {
        printf("Sorry, you can't drive");
    }
    return 0;
}


#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);

    if (age>18 || age<40)     //----> || this means (or) in C
    {
        printf("Okay, you can drive");
    }

    else
    {
        printf("Sorry, you can't drive");
    }
    return 0;
}



#include <stdio.h>

int main()
{
    int age;
    printf("ENTER YOUR AGE : ");
    scanf("%d", &age);

    if (!age>70)     //----> ! this means (not) in C
    {
        printf("Okay, you can drive");
    }

    else
    {
        printf("Sorry, you can't drive");
    }
    return 0;
}


