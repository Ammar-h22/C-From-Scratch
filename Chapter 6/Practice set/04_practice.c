#include <stdio.h>
void SumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)(*sum) / 2;
}

int main()
{
    int i, j, sum;
    float avg;
    i = 10;
    j = 5;
    SumAndAvg(i, j, &sum, &avg);
    printf("The sum of %d and %d is : %d\n", i, j, sum);
    printf("The average of %d and %d is : %f\n", i, j, avg);
    return 0;
}
