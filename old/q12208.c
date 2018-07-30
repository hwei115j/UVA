#include <stdio.h>
#include <stdint.h>

#define int uint64_t

uint64_t d[50] = {1, 1};

uint64_t tonum(int num, int n)
{
    uint64_t i, reg = 0;

    for(i = 0; i < n; i++)
        reg+=((num>>i)&1)<<i;

    return reg;
}
uint64_t func(int num, int n)
{
    if(n == 0)
        return num&1;
    if((num >> n)&1)
        return d[n] + tonum(num, n) + func(num, n - 1) + 1;
    else
        return func(num, n - 1);
}
int min(int n)
{
    int reg = 0;

    while(n)
    {
        reg += n&1;
        n>>=1;
    }

    return reg;
}
int main()
{
    uint32_t a, b;
    int i, cont = 0;

    for(i = 2; i <= 31; i++)
        d[i] = d[i-1]*2 + (1<<(i-1));

    while(scanf("%d%d", &a, &b) && (a || b))
    {
        cont++;
        printf("Case %llu: %llu\n", cont, func(b, 31) - func(a, 31) + min(a));
    }

    return 0;
}
