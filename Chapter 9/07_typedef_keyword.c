# include <stdio.h>
# include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;

int main(){
    // Declaring e1 and pointer
    emp e1;
    emp *ptr;

    // pointing ptr to e1 
    ptr = &e1;

    // Set the member values for e1
    ptr->code = 127;
    ptr->salary = 453.23;
    strcpy(ptr->name , "Rohan");
    
    printf("%d\n", ptr->code );
    printf("%0.2f\n", ptr->salary);
    printf("%s\n", ptr->name );
   
return 0;
}
