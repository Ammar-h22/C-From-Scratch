#include <stdio.h>
void slice(char *st, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        st[i] = st[m + i];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "Microsoft";
    // slice(st, 0, 6);
    slice(st, 1, 8);
    printf("%s", st);

    return 0;
}
