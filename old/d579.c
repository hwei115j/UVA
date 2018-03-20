#include<stdio.h>

int main()
{
	double a;
	
	while(scanf("%lf",&a) != EOF)
		if(a)	
		{
			printf("|%.4lf|=",a);
			printf("%.4lf\n",(a > 0)?a:-a);
		}
		else
			printf("|0.0000|=0.0000");
	
	return 0;
			
}
