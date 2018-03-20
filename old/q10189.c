#include<stdio.h>

#define MAX 102
#define la landmines

int n, m, count;
char landmines[MAX][MAX];

int land(int i, int j)	
{
	int add = 0;

	if(j - 1 >= 0 && la[i][j-1] == '*') 	
		add++;
	if(j + 1 <= m && la[i][j+1] == '*')
		add++;

	if(i - 1 >= 0 && la[i-1][j] == '*')		
		add++;
	if(i - 1 >= 0 && j - 1 >= 0 && la[i-1][j-1] == '*')
		add++;
	if(i - 1 >= 0 && j + 1 <= m && la[i-1][j+1] == '*')
		add++;

	if(i + 1 <= n && la[i+1][j] == '*')		
		add++;
	if(i + 1 <= n && j - 1 >= 0 && la[i+1][j-1] == '*')
		add++;
	if(i + 1 <= n && j + 1 <= m && la[i+1][j+1] == '*')
		add++;

	return add;
}

int main()
{
	for(count = 1 ;scanf("%d%d", &n, &m) != EOF && ( n || m ); count++)
	{
		int i, j;
		
		for(i = 0; i < n && scanf("%s", landmines[i]) != EOF; i++)
			;
		printf("Field #%d:\n", count);
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				if(landmines[i][j] == '*')
					printf("*");
				else
					printf("%d", land(i, j));					
			}
			printf("\n");
		}
		printf("\n");
	}
	
	return 0;
}
