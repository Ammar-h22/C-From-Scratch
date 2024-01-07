// #include <stdio.h>

// int main()
// {
//     int table[10];
//     int n;
//     printf("I want table of number : ");
//     scanf("%d", &n);
//     for (int i = 0; i < 10; i++)
//     {
//         table[i] = n * (i + 1);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d X %d = %d\n", n, i + 1, table[i]);
//     }

//     return 0;
// }

// // For a particular number :

// // #include <stdio.h>

// // int main()
// // {
// //     int table[10];

// //     for (int i = 0; i < 10; i++)
// //     {
// //         table[i] = 6 * (i + 1);
// //     }
// //     for (int i = 0; i < 10; i++)
// //     {
// //         printf("6 X %d = %d\n", i + 1, table[i]);
// //     }

// //     return 0;
// // }

#include <stdio.h>

int main()
{
    int n, i;
    printf("I want the Table of : ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}