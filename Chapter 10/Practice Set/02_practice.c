#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Enter the number you want table of: %d", num);
    scanf("%d", &num);
    ptr = fopen("02_mulTable.txt", "w");
    fprintf(ptr, " ***** This is the Multiplication Table of %d ***** \n", num);

    for (int i = 1; i <= 10; i++)
    {

        fprintf(ptr, "%d X %d = %d\n", num, i, num * i);
    }
    fprintf(ptr, "Your table is successfully generated !!! ");
    printf("successfully generated table of %d to 02_mulTable.txt", num);
    fclose(ptr);
    return 0;
}
