#include<stdio.h>

#define MAX 1002
#define MNUM 210

typedef struct num
{
    unsigned char num[MNUM];
}bignum;

void badd(bignum *a, bignum *b, bignum *c)
{
    int i, carry = 0;

    for(i = 0; i < MNUM; i++)
    {
        a->num[i] = b->num[i] + c->num[i] + carry;
        carry = a->num[i]/10;
        a->num[i]%=10;
    }
}
void pbnum(bignum *a)
{
    int i, j;
    

    for(i = MNUM-1; a->num[i] == 0; i--)
        ;
    for(j = i; j >= 0; j--)
        printf("%c", a->num[j]+'0');
    printf("\n");
}

int main()
{
    bignum dp[MAX];
    int n, i;

    dp[0].num[0] = 1;
    dp[1].num[0] = 1;

    for(i = 2; i < MAX; i++)
        badd(&dp[i], &dp[i-1], &dp[i-2]);
    while(scanf("%d", &n) != EOF)
        pbnum(&dp[n+1]);

    return 0;
}
