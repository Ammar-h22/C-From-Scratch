#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, greatNum;
    printf("Enter the first numbers : ");
    scanf("%d", &num1);

    printf("Enter the second numbers : ");
    scanf("%d", &num2);

    printf("Enter the third numbers : ");
    scanf("%d", &num3);

    printf("Enter the fourth numbers : ");
    scanf("%d", &num4);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            if (num1 > num4)
            {
                greatNum = num1;
            }
            else
            {
                greatNum = num4;
            }
        }
    }
    else if (num2 > num3)
    {
        if (num2 > num4)
        {
            greatNum = num2;
        }
        else
        {
            greatNum = num4;
        }
    }

    else if (num3 > num4)
    {
        greatNum = num3;
    }
    else
    {
        greatNum = num4;
    }
    printf("The greatest among these four numbers is : %d", greatNum);

    return 0;
}

