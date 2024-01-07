// # include <stdio.h>

// int main(){
//     int i=30;
//     int *j=&i ;  // (j will now store the value of i)
//     printf("The value of i is : %d\n", i);
//     printf("The value of i is : %d\n", *j);
//     printf("The address of i is : %u\n", &i);
//     printf("The address of i is : %u\n", j);
//     printf("The address of j is : %u\n", &j);
//     printf("The value of j is : %u\n", *(&j));    // (Value of j is nothing but the address of i)
// return 0;
// }


// // pointer to a pointer:
// // Example:

# include <stdio.h>

int main(){
    int i=30;
    int *j=&i;
    int **k;
    k=&j;
    printf("The value of i is : %d\n", **k);
    return 0;
}
