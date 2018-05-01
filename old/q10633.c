#include<stdio.h>

int main()
{
    long long int n;
    long long int reg;

    while(scanf("%llu", &n) && n)
    {
        int i, f = 0;

        for(i = 9; i >= 0; i--)
        {
            reg = n - i;
            if(reg % 9 == 0 && !f++)
                printf("%llu", n + reg/9);
            else if(reg % 9 == 0)
                printf(" %llu", n + reg/9);
        }
        printf("\n");
    }

    return 0;
}
