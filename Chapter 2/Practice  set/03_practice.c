#include <stdio.h>

int main()
{
    int x = 2, y = 4, z = 2, k = 1;
    int result =  (4 * x) / y - z + k;
    printf("Value of the above equation is : %d", result);
    return 0;
}


//  How C executes :
//  4 * x / y - z + k
//  8/4 - 2 + 1
//  2 - 2 + 1
//  1
