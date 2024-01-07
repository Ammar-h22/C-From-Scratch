// // ***Important Note*** :
// // In (int) and (float) variable the increment takes place by 4;
// // In (char) variable the increment takes place by 1;

// #include <stdio.h>

// int main()
// {
//     int a = 30;
//     int *ptr = &a;
//     printf("The value of ptr is : %u\n", ptr);
//     // ptr++;   // Same if we right (++ptr) or (ptr = ptr + 1)
//     ptr--; // Same if we right (--ptr) or (ptr = ptr - 1)

//     printf("The value of ptr is : %u\n", ptr);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float a = 3.5;
//     float *ptr = &a;
//     printf("The value of ptr is : %u\n", ptr);
//     ptr++;
//     printf("The value of ptr is : %u\n", ptr);

//     return 0;
// }

#include <stdio.h>

int main()
{
    char c = 'A';
    char *ptr = &c;
    printf("The value of ptr is : %u\n", ptr);
    ptr = ptr + 1;
    printf("The value of ptr is : %u\n", ptr);

    return 0;
}



