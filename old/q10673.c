#include<stdio.h>

int main()
{
	long long int k;

	scanf("%*d");
	while(scanf("%*d%lld", &k) != EOF)
		if(k&1)
			printf("%lld %lld\n", k/2, k/2+1);
		else
			printf("%lld %lld\n", k/2, k/2);

	return 0;
			
}
