#include <stdio.h>
#include <string.h>

#define MAX 50
#define SWAP(x, y) do{int temp; temp = (x); (x) = (y); (y) = temp;}while(0)

void renum(int *flap, int n)
{
    int i;

    for (i = 0; i < n/2; i++)
        SWAP(flap[i], flap[n-i-1]);
}

void recurs(int *flap, int n, int flip)
{
    if(n == 1) return ;
    int i, max = 0, ptr;

    for(i = 0; i < n; i++)
        if(flap[i] > max)
        {
            max = flap[i];
            ptr = i;
        }
    if(ptr == n - 1)
    {
        renum(flap, n);
        printf("%d ", flip + 1);
    }
    else if(ptr != 0)
    {
        renum(&flap[ptr], n - ptr);
        renum(flap, n);
        printf("%d %d ",flip + 1 + ptr, flip + 1);
    }

    recurs(&flap[1], n - 1, flip + 1);
}
#if 0
void recurs(int *flap, int n, int flip)
{
    if(n == 1)
        return ;
    int i, min = 1000, ptr;

    for(i = 0; i < n; i++)
        if(flap[i] < min)
        {
            min = flap[i];
            ptr = i;
        }

    if(ptr == n - 1)
    {
        renum(flap, n);
        printf("%d ", ptr - flip + 1);
#if 0
        printf("(");
        for(int i = 0; i < n; i++)
            printf("%d ", flap[i]);
        printf(")\n");
#endif
    }
    else if(ptr != 0)
    {
        renum(&flap[ptr], n);
#if 1 
        printf("(");
        for(int i = 0; i < n; i++)
            printf("%d ", flap[i]);
        printf(")\n");
#endif
    }

    recurs(&flap[1], n - 1, flip - 1);
}
#endif
int main()
{
    int flap[MAX];
    int n = 0;

    while(scanf("%d", &flap[n++]) != EOF)
        if(getchar() == '\n')
        {
            int i;

            for(i = 0; i < n - 1; i++)
                printf("%d ", flap[i]);
            printf("%d\n", flap[i]);
            renum(flap, n);
            recurs(flap, n, 0);
            printf("0\n");
            n = 0;
        }
    return 0;
}
