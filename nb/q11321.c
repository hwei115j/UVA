#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define MAX 10100

int64_t in[MAX], sort[MAX], num[MAX];

int odd(const void *a, const void *b)
{
    return ((*(int64_t *)b) - (*(int64_t *)a));
}

int even(const void *a, const void *b)
{
    return ((*(int64_t *)a) - (*(int64_t *)b));
}

void print_num(int64_t *num, int cont)
{
    int i;

    for(i = 0; i < cont; i++)
        printf("%lld\n", num[i]);
}

int main()
{
    int n, m;

    while(scanf("%d%d", &n, &m) && n && m)
    {
        int i, j;

        for(i = 0; i < n; i++)                          /*input*/
            scanf("%lld", &in[i]);
        printf("%d %d\n", n, m);
        for(i = -m + 1; i < m; i++)
        {
            int cont = 0, rc;

            for(j = 0; j < n; j++)                      /*mode sort*/
                if(in[j] % m == i)
                    sort[cont++] = in[j];
          
            for(j = 0, rc = 0; j < cont; j++)            /*odd*/
                if(sort[j]&1)
                    num[rc++] = sort[j];
            qsort(num, rc, sizeof(int64_t), odd); 
            print_num(num, rc);

            for(j = 0, rc = 0; j < cont; j++)            /*even*/
                if(!(sort[j]&1))
                    num[rc++] = sort[j];
            qsort(num, rc, sizeof(int64_t), even); 
            print_num(num, rc);
        }
    }
    printf("0 0\n");

    return 0;
}
