#include<stdio.h>

int main()
{
	double a;

	while(scanf("%lf",&a) != EOF)
		printf("%.2lf\n",(a > 0)?a+0.001:a-0.001);
	
	return 0;
}
