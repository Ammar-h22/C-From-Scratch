#include <stdio.h>
#include <string.h>
struct Banking
{
    int AccNo;
    char name[10];
    int amount;
    int year;
};
int main()
{
    struct Banking b1, b2;

    b1.AccNo = 692292543;
    strcpy(b1.name, "Shakil");
    b1.amount = 4000000;
    b1.year = 2004;

    b2.AccNo = 114592626;
    strcpy(b2.name, "Fatema");
    b2.amount = 2500000;
    b2.year = 20013;

    printf("Mr. %s your account No. %d which you opened in %d has amount %d, Thankyou.\n",
           b1.name, b1.AccNo, b1.year, b1.amount);
    printf("Mrs. %s your account No. %d which you opened in %d has amount %d, Thankyou.\n",
           b2.name, b2.AccNo, b2.year, b2.amount);

    return 0;
}
