#include<stdio.h>

#define C_TO_F(x) ((9.0/5)*(x)+32)
#define F_TO_C(x) (((x)-32)*5.0/9)

int main()
{
	int i, n;
	double c, d;

	scanf("%d", &n);
	for(i = 1; i <= n && scanf("%lf%lf", &c, &d) != EOF; i++)
	{
		printf("Case %d: %.2lf\n", i, F_TO_C(C_TO_F(c)+d));
	}

	return 0;
}
