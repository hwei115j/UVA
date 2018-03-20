#include<stdio.h>

int main()
{
	int n,add = 0;

	scanf("%d",&n);
	while(n >= 12)
	{
		add+=50;
		n-=12;
	}
	printf("%d\n",add+=(5*n));
	
	return 0;
}
