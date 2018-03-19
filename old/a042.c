#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    while(scanf("%d",&n) != EOF)
        printf("%d\n",(n*n-n+2));
    return 0;
}
