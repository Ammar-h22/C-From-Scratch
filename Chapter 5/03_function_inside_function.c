#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main()
{
    GoodMorning();
    return 0;
}

void GoodMorning()
{
    printf("Good Morning Ammar\n");
    GoodAfternoon();
}
void GoodAfternoon()
{
    printf("Good Afternoon Ammar\n");
    GoodNight();
}
void GoodNight()
{
    printf("Good Night Ammar\n");
}

// So here even we have called only one function i.e GoodMorning but then also
// the other two (goodAfternoon and GoodNinght) are printed.
// Because here we have wrote the function definition in different way.