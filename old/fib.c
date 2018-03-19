#include <stdio.h>

int fib(int);
int main()
{
    int n,i;

    scanf("%d",&n);
    for(i = 0;i <= n;i++)
        printf((i == n)?"%d\n":"%d ",i?fib(i):0);

    return 0;
}
int fib(int n)
{
    return (n > 2)?fib(n - 1)+fib(n - 2):1;
}
