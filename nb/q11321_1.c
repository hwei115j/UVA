#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define MAX 10010
typedef struct 
{
    int num;
    int remainder;
}data;

int cmp(const void *_a, const void *_b)
{
    data a = *((data *)_a);
    data b = *((data *)_b);
    
    if(a.remainder != b.remainder)
        return (a.remainder > b.remainder)?1:-1;
    if(a.num&1 && b.num&1)
        return (a.num > b.num)?-1:1;
    else if(!(b.num&1) && !(b.num&1))
        return (a.num > b.num)?1:-1;
    else
        return (a.num&1)?-1:1;
}

int main()
{
    int n, m;
    data in[MAX];

    while(scanf("%d%d", &n, &m) && (n || m))
    {
        int i, j;

        printf("%d %d\n", n, m);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &in[i].num);
            in[i].remainder = in[i].num%m;
        }
        qsort(in, n, sizeof(data), cmp);
        for(i = 0; i < n; i++)
            printf("%d\n", in[i]);
    }
    printf("0 0\n");

    return 0;
}
