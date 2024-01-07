//  The below program is wrong , it is just to clear the concepts:

#include <stdio.h>
int wrong_swap(int a, int b);
int main()
{
    int x = 10, y = 3;
    printf("The value of a and b before swap is : %d and %d\n", x, y);
    wrong_swap(x,y);
    printf("The value of a and b after swap is : %d and %d\n", x, y);
    return 0;
}
int wrong_swap(int a, int b){

    int temp;
    temp = a;
    a = b;
    b = temp;
}

//  This is the right program :

#include <stdio.h>
int swap(int *a, int *b);
int main()
{
    int x = 10, y = 3;
    printf("The value of a and b before swap is : %d and %d\n", x, y);
    swap(&x, &y);
    printf("The value of a and b after swap is : %d and %d\n", x, y);
    return 0;
}
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
