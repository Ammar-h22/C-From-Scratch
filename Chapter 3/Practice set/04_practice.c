#include <stdio.h>

int main()
{
    int year, check;

    printf("Enter the year\n");
    scanf("%d", &year);
    
    check = year % 4 ;
    

    if (check == 0)
    {
        printf("%d\n", check);
        printf("This year is a leap year");
    }
    else
    {
        printf("This year is not a leap year");
    }
    return 0;
}
