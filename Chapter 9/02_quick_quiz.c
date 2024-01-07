# include <stdio.h>
# include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1, e2, e3;

    printf("Enter the code for 1st employee : ");
    scanf("%d", &e1.code);
    printf("Enter the salary for 1st employee : ");
    scanf("%f", &e1.salary);
    printf("Enter the name for 1st employee : ");
    scanf("%s", e1.name);

    printf("Enter the code for 2nd employee : ");
    scanf("%d", &e2.code);
    printf("Enter the salary for 2nd employee : ");
    scanf("%f", &e2.salary);
    printf("Enter the name for 2nd employee : ");
    scanf("%s", e2.name);

    printf("Enter the code for 3rd employee : ");
    scanf("%d", &e3.code);
    printf("Enter the salary for 3rd employee : ");
    scanf("%f", &e3.salary);
    printf("Enter the name for 3rd employee : ");
    scanf("%s", e3.name);
   
return 0;
}

