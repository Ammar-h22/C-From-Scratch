#include <stdio.h>

int main()
{
    int num1, num2, num3, greatNum;
    printf("Enter the first numbers : ");
    scanf("%d", &num1);

    printf("Enter the second numbers : ");
    scanf("%d", &num2);

    printf("Enter the third numbers : ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            greatNum = num1;
        }
        else
        {
            greatNum = num3;
        }
    }
    else if (num2 > num3)
    {
        greatNum = num2;
    }
    else
    {
        greatNum = num3;
    }
    printf("The greatest of these 3 numbers is : %d", greatNum);
    return 0;
}