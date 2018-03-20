#include<stdio.h>

int main()
{
	int t, n, i;
	
	scanf("%d", &t);
	for(i = 1; i <= t && scanf("%d", &n) != EOF; i++)
	{
		int max = 0, in;

		while(n-- && scanf("%d", &in))
			if(max < in)
				max = in;
		printf("Case %d: %d\n", i, max);
	}

	return 0;
}
