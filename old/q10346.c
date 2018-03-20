#include<stdio.h>

int main()
{
	int n, k;

	while(scanf("%d%d", &n, &k) != EOF)
	{
		long long int add = 0;

		while(n-k >= 0)
		{
			add += k;
			n = n - k + 1;
		}
		printf("%lld\n", add + n);
	}

	return 0;
}
