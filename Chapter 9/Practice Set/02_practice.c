#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector Sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    struct vector v1, v2, sum;
    v1.x = 3;
    v1.y = 5;
    printf("X-Dimension is %d and Y-Dimension is %d\n", v1.x, v1.y);
    v2.x = 8;
    v2.y = 4;
    printf("X-Dimension is %d and Y-Dimension is %d\n", v2.x, v2.y);

    sum = Sumvector(v1, v2);
    printf("Result of X-dimension is %d and Y-dimension is %d", sum.x, sum.y);

    return 0;
}
