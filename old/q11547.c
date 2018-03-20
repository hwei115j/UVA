#include<stdio.h>
#define q(a) ((a) > 0)?(a):(-a)

int main()
{
	int t, n;

	scanf("%d", &t);
	while(t-- && scanf("%d", &n) != EOF)
	{
		n = (63*n + 7492)*5 - 498;
		n = (n%100 - n%10)/10;
		printf("%d\n", q(n));
	}

	return 0;
}
