// #include <stdio.h>
// struct date
// {
//     int date;
//     int month;
//     int year;
// };
// void display(struct date d)
// {
//     printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
// }
// int main()
// {
//     struct date d1 = {5, 11, 21};
//     struct date d2 = {24, 10, 21};
//     display(d1);
//     display(d2);

//     return 0;
// }

// Now we will continue with this program but this time we will also compare the dates:

#include <stdio.h>
struct date
{
    int date;
    int month;
    int year;
};
void display(struct date d)
{
    printf("The date is : %d/%d/%d\n", d.date, d.month, d.year);
}

int dateCmp(struct date d1, struct date d2)
{
    if (d1.year > d2.year)
    {
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}
int main()
{
    struct date d1 = {5, 11, 21};
    struct date d2 = {21, 6, 21};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Comparison test returns : %d", a);

    return 0;
}
