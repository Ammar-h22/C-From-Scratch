# include <stdio.h>
# include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];

};
int main(){
    struct employee e1;
    e1.code = 101;
    e1.salary = 233.52;
    // e1.name = "Harry";   ---> This will throw an error
    strcpy(e1.name , "Harry");
    printf("%d\n", e1.code);
    printf("%0.2f\n", e1.salary);
    printf("%s\n", e1.name);


return 0;
}
