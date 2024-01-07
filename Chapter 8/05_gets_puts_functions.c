#include <stdio.h>

int main()
{
    char s[35];
    printf("Enter your name : ");
    gets(s);

    printf("Your name is %s", s);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char s[35];
//     printf("Enter your name : ");
//     gets(s);
//     puts(s);

//     return 0;
// }


// We can use (gets) function without (puts) function , but we can't use (puts) function without (gets) function.
// Also there is no need to write the scanf statement when we use (gets) function.