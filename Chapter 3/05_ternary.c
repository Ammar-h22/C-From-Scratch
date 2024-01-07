# include <stdio.h>

int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);

    (a<5)? printf("A is less than 5") : printf("A is not less than 5");
return 0;
}
// We can use this (one linear) syntax instead of (if-else-if) statements.
// But we generally don't use this type of syntax because it doesn't 
// look good , so usually we use if-else-if statements.
