#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("generated.txt", "w");
    int number = 100;
    fprintf(ptr, "The number is %d\n", number);
    fprintf(ptr, "Thanks for using fprintf!!!\n");
    fclose(ptr);

    return 0;
}
