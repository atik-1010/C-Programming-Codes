#include <stdio.h>
int main()
{
    double farenheit, celsius;
    printf("Enter the temperature in farenheit : ");
    scanf("%lf",&farenheit);

    celsius = (farenheit - 32) * 5/9;
    printf("Temperature in celsius : %lf\n",celsius);

    return 0;


}
