// Program to double the value in the same file

#include <stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("05_pr.txt", "r");
    
    int num;
    fscanf(ptr, "%d", &num);
    printf("%d", num);

    ptr = fopen("05_pr.txt", "w");
    int total = num + num;
    fprintf(ptr, "%d", total);

    return 0;
}
