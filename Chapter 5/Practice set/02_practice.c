// Formula	to convert Celsius to Fahrenheit:
// (0°C × 9/5) + 32 = 32°F

#include <stdio.h>
float conversion(float celsius);
int main()
{
   float c;
   printf("Enter the Temperature in celsius : ");
   scanf("%f", &c);

    printf("The value of temperature in Fahrenheit is : %f", conversion(c));
    return 0;
}
float conversion(float celsius)
{
    float result = (celsius * 9 / 5) + 32 ;
    return result;
}

