#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float Totalper;

    printf("Enter your marks of 1st subject : ");
    scanf("%d", &sub1);

    printf("Enter your marks of 2st subject : ");
    scanf("%d", &sub2);

    printf("Enter your marks of 3st subject : ");
    scanf("%d", &sub3);

    Totalper = (sub1 + sub2 + sub3) / 3;

    if ( (Totalper <= 40)|| sub1 <= 33 || sub2 <= 33 || sub3 <= 33 )
    {
        printf("Your total percentage is : %f\n", Totalper);
        printf("Sorry, you are not promoted to the next semister");
    }

    else
    {
        printf("Your total percentage is : %f\n", Totalper);
        printf("You are promoted to the next semister");
    }
    return 0;
}
