# include <stdio.h>

int main(){
    int a = 5;
    int b = 7;
    printf("The value of a+b is : %d\n", a+b);
    printf("The value of a-b is : %d\n", a-b);
    printf("The value of a*b is : %d\n", a*b);
    printf("The value of a/b is : %d\n", a/b);
return 0;
}


#include <stdio.h>

int main()
{
    int a = 12;
    int b = 10;
    int z;
    z = a * b; // This is the right way to write
    // a*b = z;  // This will throw an error because we can't write like this
    printf("The value of z is %d", z);
    return 0;
}

// There is one more operator execpt +, -, *, / , which is % operator
// also known as modular which is used to find the remainder .
// Example:

#include <stdio.h>

int main()
{
    printf("8 when divided by 3 leaves a remainder of %d", 8 % 3);

    return 0;
}
