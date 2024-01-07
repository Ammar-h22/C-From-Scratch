// #include <stdio.h>

// int main()
// {
//     FILE *ptr;

//     ptr = fopen("03_read.txt", "r");

//     char num[10];
//     fscanf(ptr, "%s", num);
//     printf("%s", num);

//     ptr = fopen("03_write.txt", "w");
//     fprintf(ptr, "%s\n", num);
//     fprintf(ptr, "%s\n", num);

//     fclose(ptr);

//     return 0;
// }

#include <stdio.h>

int main()
{
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("03_read.txt", "r");
    ptr2 = fopen("03_write.txt", "w");

    char c = fgetc(ptr1);
    while (c != EOF)
    {
        fputc(c, ptr2);
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);

    return 0;
}
