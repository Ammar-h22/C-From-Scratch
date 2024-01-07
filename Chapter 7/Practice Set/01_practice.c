#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0];
    printf("The value of first element in array is : %d\n", *ptr);
    ptr = ptr + 2;
    printf("The value of element in array after increment is : %d\n", *ptr);

    return 0;
}




// #include <stdio.h>

// int main()
// {
//     int arr[10];
//     int *ptr = &arr[0];
//     ptr = ptr + 2;
//     if (ptr == &arr[2])
//     {
//         printf("These points to the same location in memory");
//     }
//     else
//     {
//         printf("These do not point to the same location in memory");
//     }
//     return 0;
// }
