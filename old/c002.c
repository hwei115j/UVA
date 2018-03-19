#include<stdio.h>
int f91(int);

int main()
{
    int n;

    while(scanf("%d",&n) && n)
        if(n >= 101)
            printf("f91(%d) = %d\n",n,n-10);
        else
            printf("f91(%d) = %d\n",n,f91(f91(n+11)));            

    return 0;
}
int f91(int a)
{
    if(a >= 101)
        return a-10;
    else
        return f91(f91(a+11));
}
