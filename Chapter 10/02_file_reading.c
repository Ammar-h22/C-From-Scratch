// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     ptr = fopen("sample2.txt", "r");
//     int num;
//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d", num);
//     fclose(ptr);
//     return 0;
// }

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ammar.txt", "r");

    char num1[10];
    char num2[10];

    fscanf(ptr, "%s", num1);
    fscanf(ptr, "%s", num2);
    
    printf("The value of num1 is %s\n", num1);
    printf("The value of num2 is %s\n", num2);
    fclose(ptr);

    return 0;
}
