#include<stdio.h>
#include<stdlib.h>

#define MAX 2000001

int compare(const void *a, const void *b)
{
	return (*(char *)a - *(char *)b);
}

int main()
{
	unsigned char num[MAX];
	int i, n;
	
	while(scanf("%d", &n) != EOF && n)
	{
		for(i = 0; i < n; i++)
			scanf("%d", &num[i]);
		qsort(num, n, sizeof(char), compare);
		for(i = 0; i < n; i++)
			printf((i+1 == n)?"%d\n":"%d ", (int)num[i]); 
	}

	return 0;
}
