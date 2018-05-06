#include <stdio.h>
#define MAX 110

int func(int n, int m)
{
    int i;

    for(i = 0; i < n && ((i * m)%n != 13); i++);

    return (i == n)?0:1;
}
int main()
{
    int n;

    while(scanf("%d", &n) && n)
    {
        int m = 1;

        while(func(n, m++));
        printf("%d\n", m - 1);
    }

    return 0;
}
