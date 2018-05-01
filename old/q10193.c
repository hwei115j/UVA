#include <stdio.h>
#define MAX 35

int toint(char *str)
{
    int i, reg = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        reg <<= 1;
        reg += str[i] - '0';
    }

    return reg;
}

int gcd(int s1, int s2)
{
    while ((s1 %= s2) && (s2 %= s1))
        /* empty */;
    return s1 + s2 - 1;
}

int main()
{
    int n, i;
    char str[MAX];
   
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        int s1, s2;

        scanf("%s", str);
        s1 = toint(str);
        scanf("%s", str);
        s2 = toint(str);
        if(gcd(s1, s2))
            printf("Pair #%d: All you need is love!\n", i);
        else
            printf("Pair #%d: Love is not all you need!\n", i);
    }

    return 0;
}
