#include<stdio.h>

int main()
{
    long long int a;

    while(scanf("%lld",&a) != EOF && (a/=2)) 
        printf("%lld\n",(a/2)*(a-a/2));

    return 0;
}
