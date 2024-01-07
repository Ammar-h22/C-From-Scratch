#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Hello";
    char *str2 = "Helvo";
    int value = strcmp(str1, str2);
    printf("The value is %d", value);
    return 0;
}
