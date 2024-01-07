#include <stdio.h>

int main()
{
    // char str[] = {'A', 'm', 'm', 'a', 'r', '\0'};
    char str[] = "Ammar";

    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}
