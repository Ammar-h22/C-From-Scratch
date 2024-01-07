#include <stdio.h>

int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);

        if (i == 7)
        {
            break;
        }
    }

    return 0;
}

// //  We can also use break statement in while and do while loops.
// // For example in do while loop:

// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("%d\n", i);
//         if (i == 4)
//         {
//             break;
//         }
//         i++;
//     } while (i < 10);

//     return 0;
// }
