#include <stdio.h>

int main()
{
    // The below code will throw an error because we can't change str
    // because we have declared it in an array form (str[]).
    
    // char str[] = "Ammar is a good boy";
    // str = "Soham is a good boy";
    // printf("%s", str);

    // This below code is correct beacuse if we want
    // to change the str then we should declare it in pointer form (*str) form.
    
    char *str = "Ammar is a good boy";
    str = "Soham is a good boy";
    printf("%s", str);

    return 0;
}
