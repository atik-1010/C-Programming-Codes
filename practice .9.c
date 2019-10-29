#include<stdio.h>
int main()
{
    double num1,num2,result;
    printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);

    result = num1+ num2;
    printf("Sum is : %lf\n",result);

    result = num1 - num2;
    printf("Sub is : %lf\n",result);

    result = num1 * num2;
    printf("mul is : %lf\n",result);

    result = num1 /num2;
    printf("div is : %lf",result);

    return 0;

}
