#include<stdio.h>

int main()
{
	int a,b;
	int i,n = 1;
	int add;

	scanf("%d",&add);
	while(scanf("%d",&a) != EOF)
	{
		add = 0;
		scanf("%d",&b);
		if((a&1))
			for(i = a;i <= b;i+=2)
				add+=i;				
		else
			for(i = (a+1);i <= b;i+=2)
				add+=i;
		printf("Case %d: %d\n",n,add);
		n++;
	}
	return 0;
}
