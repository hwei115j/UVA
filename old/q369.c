#include<stdio.h>
#define MAX 101

int main()
{
	int n, m;
	unsigned long long int dp[MAX][MAX] = {0};
	int i, j;

	for(i = 1; i < MAX; i++)
		for(j = 1; j < MAX; j++)
		{
			if(j == 1)
				dp[i][j] = i;
			else if(i == j)
				dp[i][j] = 1;
			else if(j < i)
				dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
		}
	
	while(scanf("%d%d", &n, &m) != EOF && (n || m))
		printf("%d things taken %d at a time is %llu exactly.\n", n, m, dp[n][m]);

	return 0;
}
