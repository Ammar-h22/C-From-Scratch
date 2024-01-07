#include <stdio.h>

int main()
{

    int quiz[5] = {12, 54, 67, 68, 57};

    int *ptr1 = &quiz[0];
    int *ptr2 = &quiz[4];

    printf("The address of variable quiz[0] is : %u\n", ptr1);
    printf("The address of variable quiz[4] is : %u\n", ptr2);

    printf("%d\n", ptr2 - ptr1);       // Total memory locations the 2 pointer variables are away from one another
    printf("%d\n", (ptr2 - ptr1) - 1); // Total memory locations available in between two pointer variables
    printf("%d\n", (ptr2 - ptr1) + 1); // Total elements available in array

    return 0;
}
