#include <stdio.h>
#define MAX 240

void long_add(int *reg, char *vli)
{
    int i, j;

    for(j = 0; vli[j]; j++);
    for(i = MAX - 1, j--; j >= 0; i--, j--)
        reg[i] += vli[j] - '0';
}

void long_carry(int *reg)
{
    int i, n;

    for(n = 0; !reg[n]; n++);
    for(i = MAX - 1; i > n; i--)
    {
        reg[i - 1] += reg[i]/10;
        reg[i] %= 10;
    }

    for(i = n; i < MAX; i++)
        printf("%d", reg[i]);
    printf("\n");
}

int main()
{
    char vli[MAX] = {};
    int reg[MAX] = {};

    while(scanf("%s", vli) && vli[0] != '0')
        long_add(reg, vli);
    long_carry(reg);

    return 0;
}
