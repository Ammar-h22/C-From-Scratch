#include <stdio.h>
void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is : %d\n", i + 1, ptr[i]);
    }
}
int main()
{
    int value[] = {12, 34, 56, 68, 234, 635, 25, 52};
    printArray(value, 8);
    return 0;
}


           //***** OR ******//


// #include <stdio.h>
// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is : %d\n", i + 1, *(ptr + i));
//     }
// }
// int main()
// {
//     int value[] = {12, 34, 56, 68, 234, 635, 25, 52};
//     printArray(value, 8);
//     return 0;
// }
