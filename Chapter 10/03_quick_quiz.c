#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample21.txt", "r");
    if (ptr == NULL)
    {
        printf("This file doesn't exist\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        fclose(ptr);
    }

    return 0;
}
