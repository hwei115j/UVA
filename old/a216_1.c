#include<stdio.h>
#define N (n+1)

int main()
{
	int n;

	while(scanf("%d",&n) != EOF)
	{
		double add = 0;

		printf("%d",(1+n)*n/2);
		while(n-- > 0)
			add+=((1+N)*N/2);
		printf(" %.0lf\n",add);
	}

	return 0;
}

