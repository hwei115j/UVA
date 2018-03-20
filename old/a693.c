#include<stdio.h>
#define MAX 100001

int main()
{
	int n[MAX];
	int m,l,r,i;
	int a = 0;

	scanf("%d %d",&n[0],&m) == EOF?(a = 1):(a = 0);
	for(i = 1;i <= n[0];i++)
		scanf("%d",&n[i]);
	
	while(scanf("%d%d",&l,&r) != EOF)
	{
		unsigned long long int add = 0;

		for(i = l;i <= r;i++)
			add+=n[i];
		printf("%d\n",add);
	}

	return 0;
}
