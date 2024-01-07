#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main()
{
    GoodMorning();
    GoodAfternoon();
    GoodNight();
    return 0;
}

void GoodMorning()
{
    printf("Good Morning Ammar\n");
}
void GoodAfternoon()
{
    printf("Good Afternoon Ammar\n");
}
void GoodNight()
{
    printf("Good Night Ammar\n");
}


//   In this program we can also insert some other things that we want to print
//  For example:

#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main()
{
    GoodMorning();
    printf("Have a nice day\n");
    GoodAfternoon();
    printf("Get ready for practical lecture\n");
    GoodNight();
    printf("It's too late , now go to sleep\n");
    return 0;
}

void GoodMorning()
{
    printf("Good Morning Ammar\n");
}
void GoodAfternoon()
{
    printf("Good Afternoon Ammar\n");
}
void GoodNight()
{
    printf("Good Night Ammar\n");
}