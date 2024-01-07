#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("getcDemo.txt", "r");
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    printf("The value of my character is %c\n", fgetc(ptr));
    fclose(ptr);
    return 0;
}

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("putcDemo.txt", "w");
    fputc('A', ptr);
    fputc('m', ptr);
    fputc('m', ptr);
    fputc('a', ptr);
    fputc('r', ptr);
    fclose(ptr);
    return 0;
}

// IMPORTANT:
// Even if we write getc and putc instead of fgetc and fputc, it works the same.
