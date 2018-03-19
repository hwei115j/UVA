#include<stdio.h>
#include<limits.h>

#define MAX 20

int main()
{
	int n, t, cd[MAX];

	while(scanf("%d%d", &n, &t) != EOF)
	{
		int i, j, table[MAX] = {0};
        int dp[MAX][MAX] = {0};

		for(i = 0; i < t; i++)
			scanf("%d", &cd[i]);
        for(i = 0; i < t; i++)
            for(j

		printf("%d\n"); 
	}

	return 0;
}
