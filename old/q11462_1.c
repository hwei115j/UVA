#include<stdio.h>

int main()
{
	int n, i, j;

	while(scanf("%d", &n) != EOF && n)
	{
		int num[102] = {0};

		for(i = 0; i < n; i++)
		{
			scanf("%d", &j);
			num[j]++;
		}
		for(i = 1; i <= 100; i++)
			for(j = 0; j < num[i]; j++)
				printf((num[i+1] == 0 && j+1 == num[i])?"%d\n":"%d ", i);
	}
	
	return 0;
}
