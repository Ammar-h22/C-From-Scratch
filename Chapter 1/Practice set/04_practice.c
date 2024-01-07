#include <stdio.h>

int main()
{
    float celsius , far;
    far = (celsius * 9/5) + 32;

    printf("Enter the temperature in Celsius : ");
    scanf("%d", &celsius);

    printf("The Temperature in Faranite is : %f", far);
 
    return 0;
}

// # include <stdio.h>

// int main(){
//     float celsius = 23, far;
//     far = (celsius * 9/5) + 32;
//     printf("The temperature in Faranite is %f", far );
//     return 0;
// }
