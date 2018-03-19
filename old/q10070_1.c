#include<stdio.h>
#include<string.h>
#define MAX 1000

typedef struct big
{
    char a[MAX];
}bignum;

int input_bignum(bignum *num)
{
    char s[MAX];
    int n, i = MAX-1, j = 0;

    if(scanf("%s", s) == EOF)
        return EOF;
    n = strlen(s);
    while(i >= n)
        num->a[i--] = 0;
    while(i >= 0)
        num->a[i--] = s[j++]-'0';

    return 0;
}
void set_num(bignum *num)
{
    int i;
    
    for(i = 0; i < MAX; i++)
        num->a[i] = 0;
}

int mod(bignum *num, int n)
{
    int i, j, reg = 0;

    for(i = MAX-1; i >= 0; i--)
    {
        reg = reg*10 + num->a[i];
        for(j = 9; j > 0; j--)
            if(n*j <= reg)
                break;
        reg-=n*j;
    }
    
    return reg;
}

int main()
{
    int s = 0;
    bignum num;

    while(input_bignum(&num) != EOF)
    {
        int flag = 0, f = 0;
        if(s)
            printf("\n");
        if((!mod(&num, 4) && mod(&num, 100) || !mod(&num, 400)) && ++f)
            printf("This is leap year.\n") && flag++;
        if(!mod(&num, 15))
            printf("This is huluculu festival year.\n") && flag++;
        if(f && !mod(&num, 55))
            printf("This is bulukulu festival year.\n") && flag++;
        if(!flag)
            printf("This is an ordinary year.\n");
        s = 1;
    }

    return 0;
}
