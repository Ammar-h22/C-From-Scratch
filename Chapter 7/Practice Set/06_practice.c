// This program is also the 5th no. problem ,
//  but here we will do this problem by using functions:

#include <stdio.h>
void printTable(int *mulTable, int num, int n)
{
    printf("The Multiplication Table of %d is : \n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }
    printf("**********************************************\n\n");
}
int main()
{
    int mulTable[3][10];
    printTable(mulTable[0], 2, 10);
    printTable(mulTable[1], 7, 10);
    printTable(mulTable[2], 9, 10);
    return 0;
}
