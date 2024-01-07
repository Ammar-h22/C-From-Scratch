#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}

//  Or we can directly fix the value of a
// For example

#include <stdio.h>

int main()
{
    int a = 0;

    while (a < 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}