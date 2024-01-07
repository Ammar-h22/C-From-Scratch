#include <stdio.h>
int natural(int x);

int main()
{
    int i, n, sum = 0;
    printf("Enter the number : ");
    scanf("%f", &n);

    for (i = 1; i <= n; i++)
        
    printf("The sum of first %d natural numbers is : %d", n, sum);
    sum += 1;

    return 0;
}
int natural(int x)
{
    return (natural(x) + x)/ 2;
}
//  This programm is not completed yet, this is wrong.
