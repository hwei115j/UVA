#include<stdio.h>

int main()
{
	double a,b,c;
	int n,f;

	scanf("%d",&n);
	while(n-- > 0)
	{
		double add = 0;

		scanf("%d",&f);
		while(f-- > 0 && scanf("%lf%lf%lf",&a,&b,&c) != EOF)
			add+=(a*c);			
		printf("%.0lf\n",add);
	}
	
	return 0;
}

