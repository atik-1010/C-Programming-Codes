#include <stdio.h>
int main()
{
    int num1,  num2, value;
    char sing;

    printf("Please Enter  a number : ");
    scanf("%d",&num1);

    printf("Please enter another number : ");
    scanf("%d",&num2);

    value = num1 + num2;
    sing  = '+';
    printf("%d %c %d = %d\n",num1, sing, num2, value);

    value = num1 - num2;
    sing  = '-';
    printf("%d %c %d = %d\n",num1, sing, num2, value);


    value = num1 * num2;
    sing = '*';
    printf("%d %c %d = %d\n", num1, sing, num2, value);

    value = num1 / num2;
    sing = '/';
    printf("%d %c %d = %d\n", num1 , sing, num2, value);



    return 0;


}
