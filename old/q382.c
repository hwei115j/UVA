#include<stdio.h>
#define MAX 60001

int main()
{
	int n;

	printf("PERFECTION OUTPUT\n");
	while(scanf("%d", &n) != EOF && n)
	{
		int num[MAX] = {0};
		int i, add = 0;
		
		for(i = 1; i < n; i++)
			if(n%i == 0)
				num[i] = 1;
		for(i = 1; i < n; i++)
			if(num[i])
				add+=i;
		if(n == add)
			printf("%5d  PERFECT\n", n);
		else if(n > add)
			printf("%5d  DEFICIENT\n", n);
		else
			printf("%5d  ABUNDANT\n", n);
	}
	printf("END OF OUTPUT\n");

	return 0;
}
