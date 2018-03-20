#include<stdio.h>
#define MAX 1001

int main()
{
	int i, n;

	scanf("%*d");
	while(scanf("%d", &n) != EOF)
	{
		long long int res = 0;
		
		for(i = 1; i <= n/2; i++)
		{
			res += n/i;
			printf("%lld ", n/i);
		}
		printf("%lld\n", res+n/2+(n&1 == 1));
	}

	return 0;
}
