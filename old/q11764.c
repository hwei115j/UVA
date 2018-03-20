#include<stdio.h>

int main()
{
	int t, n;
	int i;

	scanf("%d", &t);
	for(i = 1; i <= t && scanf("%d", &n) != EOF; i++)
	{
		int j, a;
		int reg, high = 0, low = 0;

		for(j = 0; j < n && scanf("%d", &a) != EOF; j++)
		{
			if(!j)
				reg = a;
			if(reg < a)
				high++;
			if(reg > a)
				low++;
			reg = a;
		}
		printf("Case %d: %d %d\n", i, high, low);
	}

	return 0;
}
