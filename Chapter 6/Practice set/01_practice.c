# include <stdio.h>

int main(){
    int a=12;
    int *b=&a;
    printf("The address of variable a is : %u\n",b );
    printf("The value of variable a is : %u\n", *b );
return 0;
}
