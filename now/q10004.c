#include <stdio.h>
#define MAX 200

int main()
{
    int n, m;

    while(scanf("%d%d", &n, &m) && n)
    {
        int a, b;
        int i, j;
        int arr[MAX] = {a};
        int map[MAX][MAX] = {};
        
        while(m-- && scanf("%d%d", &a, &b))
            map[a][b] = map[b][a] = 1;
        for(i = 0; i < MAX; i++)
            for(j = 1; j < MAX; j++)
                arr[i] = map[i][j];
    }
}
