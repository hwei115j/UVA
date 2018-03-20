#include<stdio.h>

#define MAX 10000

int main()
{
	int n, r;
	int num[MAX];

	while(scanf("%d%d", &n, &r) != EOF)
	{
		int i, j;

		if(n != r)
		{
			for(i = 1; i <= r; i++)
				scanf("%d", &num[i]);
			num[i] = -1;

			for(i = 1; i <= n; i++)
			{
				int flag = 0;

				for(j = 1; num[j] != -1; j++)
					if(i == num[j])
						flag++; 
				if(!flag)
					printf("%d ", i);
			}
			printf("\n");
		}
		else
		{
			getchar();
			while(getchar() != '\n');
			printf("*\n");
		}
	}

	return 0;	
}
