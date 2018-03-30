#include <stdio.h>
#define SWAP(n, m) while(n > m){int r = n; n = m; m = r;}

int func(int n, int m)
{
    SWAP(n, m);
    if(n == 1)
        return m;
    if(n == 2)
        return m/4*4 + 2*((m%4 == 3)?2:m%4);
   
    return (n*m + 1)>>1;
}
int main()
{
    int n, m;

    while(scanf("%d%d", &n, &m) && (n || m))
        printf("%d knights may be placed on a %d row %d column board.\n", func(n, m), n, m);  

    return 0;
}
