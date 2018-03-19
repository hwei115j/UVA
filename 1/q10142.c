#include<stdio.h>

#define NUM 1000
#define MAX 21
#define STR 90

int main()
{
    int n, m;

    while(scanf("%d\n%d\n", &n, &m) != EOF)
    {
        char name[MAX][STR];
        int num[NUM][MAX];
        int cont = 0;
        int i, j, k;

        for(i = 0; i < m; i++)
            gets(name[i]);
        do
        {
            char c;

            for(i = 0; i < n; i++)
                scanf("%d", &num[cont][i]);
            scanf("%*[^\n]%*c");
            cont++;
        }while((c = getchar()) != '\n' && ungetc(c, stdin));

        for(i = 0; i < n; i++)
            for(j = 1; j <= n; j++)
                for(k = 0; k <= cont; k++)
                {
                    num[j][i];
                }
        
    }
}
