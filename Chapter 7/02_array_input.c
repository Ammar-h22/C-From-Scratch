#include <stdio.h>

int main()
{
    int marks[3]; // allocates space for 3 integers
    printf("Enter the marks for first student: ");
    scanf("%d", &marks[0]);
    printf("Enter the marks for second student: ");
    scanf("%d", &marks[1]);
    printf("Enter the marks for third student: ");
    scanf("%d", &marks[2]);

    printf("The marks you entered are %d, %d and %d.",
           marks[0], marks[1], marks[2]);
    return 0;
}
