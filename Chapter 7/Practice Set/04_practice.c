// // Function to print no. of positive integers in the array:

// #include <stdio.h>
// void integers(int *arr, int n)
// {
//     int positive_count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//             positive_count++;
//     }
//     printf("There are total %d positive integers in this Array\n", positive_count);
// }
// int main()
// {
//     int arr[] = {1, -5, 85, 5, 8, 4, 76, 57, -6, -65};
//     integers(arr, 10);

//     return 0;
// }


// Function to print no. of positive and negative integers in the array:

#include <stdio.h>
void integers(int *arr, int n)
{
    int positive_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            positive_count++;
    }
    int negative_count = 0;
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
            negative_count++;
    }

    printf("There are total %d positive integers in this Array\n", positive_count);
    printf("There are total %d negative integers in this Array\n", negative_count);
    
}
int main()
{
    int arr[] = {1, -5, 85, 5, 8, 4, 76, 57, -6, -65};
    integers(arr, 10);

    return 0;
}
