#include<stdio.h>

int main()
{
	unsigned long long n;
	int i;
	scanf("%d", &i);
	while(scanf("%lld", &n) != EOF && i-- > 0)
		printf(((((1+n)*n)/2)%3 == 0)?"YES\n":"NO\n");

	return 0;
}
