#include<stdio.h>

int main()
{
	double a, b;
	long long int s, d;

	scanf("%*d");
	while(scanf("%lld%lld", &s, &d) != EOF)
	{
		a = (s + d) / 2.0;
		b = (s - d) / 2.0;
		if(s+d)
		{
			if((a < 0 || b < 0) || (a-(int)a) > 0.01 || (b-(int)b) > 0.01)
				printf("impossible\n");
			else
				printf("%.0lf %.0lf\n", a, b);
		}
		else
			printf("0 0\n");
	}

	return 0;
}
