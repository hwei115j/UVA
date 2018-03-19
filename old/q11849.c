#include <stdio.h>
#define MAX 1000000

int main()
{
    int n, m;
    int arrn[MAX], arrm[MAX];

    while(scanf("%d%d", &n, &m) && (n != 0 || m != 0))
    {
        int i, j, p, add = 0;

        for(i = 0; i < n; i++)
            scanf("%d", &arrn[i]);
        for(i = 0; i < m; i++)
            scanf("%d", &arrm[i]);
        
        for(i = 0, p = 0; i < n; i++)
        {
            for(j = p; arrn[i] > arrm[j]; j++);
            if(arrn[i] == arrm[j])
            {
                add++;
                p = j;
            }
        }

        printf("%d\n", add);
    }

    return 0;
}
