#include <stdio.h>

int main()
{
    int fact = 1;
    int n = 6;
    for(int i = 1; i <= n; i++){
        fact = fact * i;


    }
    printf("The Factorial of %d is : %d\n",n,fact);

}
