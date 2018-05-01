#include <stdio.h>
#define MAX 201

int main()
{
    int n, m;

    while(scanf("%d%d", &n, &m) && n)
    {
        int a, b;
        int i, j;
        int flag = 0;
        int arr[MAX] = {'a'};
        int map[MAX][MAX] = {};
        
        while(m-- && scanf("%d%d", &a, &b))
            map[a][b] = map[b][a] = 1;

        for(i = 0; i < MAX-1 && !flag; i++)
        {
            if(arr[i] == 'a')
            {
                for(j = i+1; j < MAX; j++)
                    if(map[i][j] && arr[j] == 'a')
                        flag++;
                    else if(map[i][j])
                        arr[j] = 'b';
            }
            if(arr[i] == 'b')
            {
                for(j = i+1; j < MAX; j++)
                    if(map[i][j] && arr[j] == 'b')
                        flag++;
                    else if(map[i][j])
                        arr[j] = 'a';
            }
        }

        printf((flag > 0)?"NOT BICOLORABLE.\n":"BICOLORABLE.\n");
        /*for(i = 0; i < 10; i++)
        {
            for(j = 0; j < 10; j++)
                printf("%d ", map[i][j]);
            printf("\n");
        }*/
    }

    return 0;
}
