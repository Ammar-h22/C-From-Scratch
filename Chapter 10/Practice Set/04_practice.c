#include <stdio.h>

int main()
{
    FILE *ptr;
    char name1[10];
    char name2[10];
    int salary1;
    int salary2;
    printf("Enter your name and salary for employee 1: ");
    scanf("%s %d", name1, &salary1);
    printf("Enter your name and salary for employee 2: ");
    scanf("%s %d", name2, &salary2);
    ptr = fopen("04_pr.txt", "w");
    fprintf(ptr, "(%s , %d)\n", name1, salary1);
    fprintf(ptr, "(%s , %d)\n", name2, salary2);

    return 0;
}
