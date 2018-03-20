#include<stdio.h>

#define MAX 1000001

int main()
{
	char prime[MAX] = {1, 0, 0};
	int n, i, j;

	for(i = 2; i < MAX; i++)
		if(!prime[i])
			for(j = i+i; j <= MAX; j+=i)
				prime[j] = 1;

	while(scanf("%d", &n) != EOF && n)
	{
		for(i = 2; i <= n; i++)	
			if(!prime[i] && !prime[n-i] && printf("%d = %d + %d\n", n, i, n-i))
				break;
	}

	return 0;
}
