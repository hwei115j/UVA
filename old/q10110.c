#include<stdio.h>
#include<math.h>

int main()
{
	double n;

	while(scanf("%lf", &n) != EOF && n)
	{
		unsigned int a = sqrt(n); 

		printf(((n - a*a < 0.001))?"yes\n":"no\n");
	}

	return 0;
}
