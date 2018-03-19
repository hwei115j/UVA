#include<stdio.h>

int func(unsigned long long int n, unsigned long long int p, int cont)
{
    int reg;
    
    if(cont&1)
        reg = 9;
    else 
        reg = 2;

    if(p < n)
        func(n, p*reg, cont+1);
    else
        return cont;
}
int main()
{
    unsigned long long int n;

    while(scanf("%llu", &n) != EOF)
    {
        int t = func(n, 1, 1);

        printf(!(t&1)?"Stan wins.\n":"Ollie wins.\n");
    }
    
    return 0;
}
