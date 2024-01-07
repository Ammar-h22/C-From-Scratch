#include <stdio.h>
struct complex
{
    int real;
    int img;
};
void display(struct complex c)
{
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary part is %d\n", c.img);
}
int main()
{
    struct complex num[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for num %d : ", i + 1);
        scanf("%d", &num[i].real);

        printf("Enter the imaginary value for num %d : ", i + 1);
        scanf("%d", &num[i].img);
    }
    for (int i = 0; i < 5; i++)
    {
        display(num[i]);
    }

    return 0;
}
