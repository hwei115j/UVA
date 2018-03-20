#include<stdio.h>

int main()
{
	int t,i;
	int a,b,c;
	
	scanf("%d",&t);
	for(i = 1;i <= t;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a > b)
			if(a > c)
				printf("Case %d: %d\n",i,b*(b > c)+c*(c > b));
			else
				printf("Case %d: %d\n",i,a);
		else
			if(b > c)
				printf("Case %d: %d\n",i,a*(a > c)+c*(c > a));
			else
				printf("Case %d: %d\n",i,b);
	}
	return 0;
}
