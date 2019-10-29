#include <stdio.h>

int main()

{
    int x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x + y : ");
    scanf("%d", &x_plus_y);

    printf("Enter the value of x - y : ");
    scanf("%d", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("x = %0.2d, y = %0.2d\n", x, y);

    return 0;

}
