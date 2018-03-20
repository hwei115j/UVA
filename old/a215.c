#include<stdio.h>

int main()
{
	int n,m,i,n1;
	
	while(scanf("%d%d",&n,&m) != EOF)
	{
		n1 = n;
		for(i = 1;n <= m;i++)
			n+=(n1+i);
		printf("%d\n",i);
	}
	
	return 0;
}
