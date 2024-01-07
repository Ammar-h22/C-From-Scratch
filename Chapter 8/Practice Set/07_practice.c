#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}
int main()
{
    char c[] = "Dpnf!up!sppn!Op/!513";
    decrypt(c);
    printf("Decrypted code is : %s", c);
    return 0;
}
