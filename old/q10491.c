#include<stdio.h>
#define FS (a+b-c-1)

int main()
{
	double a, b, c;

	while(scanf("%lf%lf%lf", &a, &b, &c) != EOF)
		printf("%.5lf\n", a/(a+b) * b/FS + b/(a+b) * (b-1)/FS);

	return 0;
}
