#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the number : ");
    scanf("%d", &n);

    while (i <= n){
        sum += i;
    i++;
    }
          printf("The sum of given natural number is : %d ", sum);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int i, sum = 0;
//     for (i = 0; i <= 10; i++)
//         sum += i;
//     {
//         printf("The addition of first 10 natural numbers is : %d ", sum);
//     }
//     return 0;
// }

// //  If we want to take number from the user than we can also do that ,
// #include <stdio.h>

// int main()
// {
//     int i, n, sum=0;
//     printf("Enter the number :  ");
//     scanf("%d", &n);
//     for (i = 0; i <= n; i++)
//         sum += i;
//     {
//         printf("The sum of given natural number is : %d ", sum);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 1, sum = 0, n;
//     printf("Enter the number :  ");
//     scanf("%d", &n);
//     do
//     {
//         sum += i;
//         i++;

//         printf("The sum of given natural number is : %d ", sum);

//     } while (i <= n);

//     return 0;
// }
