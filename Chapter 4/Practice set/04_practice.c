#include <stdio.h>

int main()
{
    int i, sum;
    printf("*** The multiplication table of 8 is ***\n");
    for (i = 1; i <= 10; i++)

    {
        printf("8 * %d = %d\n", i, 8 * i);
        sum += 8 * i;
    }
    printf("Now the total sum of these numbers is : %d", sum);
    return 0;
}
