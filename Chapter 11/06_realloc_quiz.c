#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i <= 10; i++)
    {
        printf("7 X %d = %d\n", i, 7 * i);
    }
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    printf("Printing table After Reallocating the size\n");
    for (int i = 1; i <= 15; i++)
    {

        printf("7 X %d = %d\n", i, 7 * i);
    }

    return 0;
}
