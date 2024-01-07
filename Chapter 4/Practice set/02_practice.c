# include <stdio.h>

int main(){
    int n, i;
    printf("Enter the number :");
    scanf("%d", &n);
    for(i=10; i; i--){
        printf("%d * %d = %d\n", n, i, n*i);
    }
return 0;
}

// //  or if we want to do for a particular number
// // For exmaple:

// #include <stdio.h>

// int main()
// {
//     printf("*** The Multiplication table of 5 ***\n\n");
//     for (int i = 10; i; i--)
//     {
//         printf("5 X %d = %d\n", i, 5 * i);
//     }
//     return 0;
// }
