#include <stdio.h>
#include <string.h>
int main()
{
    char *st1 = "Tata";
    char st2[50];
    strcpy(st2, st1);
    printf("Landrover is now owned by %s",st2);
    return 0;
}
