#include<stdio.h>
#include<math.h>

long long int rebmod(int k, int p, int m)
{
	long long ret;

	if(p == 0)
		return 1;
	if(p == 1)
		return k;
	ret = rebmod(k, p/2, m);
	
	return (p&1)?(ret*ret*k) % m:(ret*ret) % m;
}
int main()
{
	int b, p, m;

	while(scanf("%d%d%d", &b, &p, &m) != EOF)
		printf("%lld\n", rebmod(b%m, p, m));

	return 0;
}
