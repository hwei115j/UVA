#include <stdio.h>

int main()
{
    int t, n, m;

    scanf("%d", &t);

    while(t-- && scanf("%d%d", &n, &m))
    {
        n = (n - 2)/3 + !!((n - 2)%3);
        m = (m - 2)/3 + !!((m - 2)%3);
        printf("%d\n", n*m);
    }

    return 0;
}
