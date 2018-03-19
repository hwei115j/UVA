#include<stdio.h>
#include<limits.h>

#define MAX 20

int func(int n, int w, int *cd)
{
	if(w < 0)
		return INT_MIN;
	if(n < 0)
		return 0;
	int a = func(n-1, w-cd[0], &cd[1])+cd[0];
	int b = func(n-1, w, &cd[1]);

	if(a >= b)
		return a;
	return b;
}
int main()
{
	int n, t, cd[MAX];

	while(scanf("%d%d", &n, &t) != EOF)
	{
		int i, table[MAX] = {0};

		for(i = 0; i < t; i++)
			scanf("%d", &cd[i]);
		printf("%d\n", func(t-1, n, cd)); 
	}

	return 0;
}
