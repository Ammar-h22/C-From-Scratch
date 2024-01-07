// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;
//     ptr = (int *)malloc(6 * sizeof(int));
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     float *ptr;
//     ptr = (float *)malloc(5 * sizeof(float));
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     printf("Enter the element %d: \n", i + 1);
//     //     scanf("%f", &ptr[i]);
//     // }
//     for (int i = 0; i < 5; i++)
//     {
//         printf("The element %d is : %0.2f \n", i + 1, ptr[i]);
//         }
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n;
    printf("How many integers do you want to enter: \n");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for element %d\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The number for element %d is %d\n", i + 1, ptr[i]);
    }
return 0;
}
