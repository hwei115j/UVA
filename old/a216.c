#include<stdio.h>

double f(double n)
{
	return ((n+1)*n)/2;
}
double g(double n)
{
	return (n == 1)?1:f(n)+g(n-1);
}
int main()
{
	int n;
	
	while(scanf("%d",&n) != EOF)
		printf("%.0lf %.0lf\n",f(n),g(n));

	return 0;
}

