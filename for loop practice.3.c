#include<stdio.h>
int main()
{
    int n = 5;
    int i;
    int m = 0;
    for (i = 1; i <= 10; i = i + 1){
            m = m + n;

        printf("%d x %d = %d\n",i,n,m);

    }
    return 0;

}
