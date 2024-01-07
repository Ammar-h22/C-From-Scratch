# include <stdio.h>
struct vector {
    int x;
    int y;
};
int main(){
    struct vector v1;
    v1.x = 23;
    v1.y = 15;
    printf("The x-coordinate of this vector is %d\n", v1.x);
    printf("The y-coordinate of this vector is %d\n", v1.y);

return 0;
}
