#include<stdio.h>
#define NUM 51

int main()
{
	int a,b[NUM];
	int c = 1;

	while(scanf("%d",&a) && a)
	{
		int i,add = 0,min = 0;
			
		for(i = 0;i < a;i++)
		{
			scanf("%d",&b[i]);
			add+=b[i];
		}
		add/=a; //求平均值
		for(i = 0;i < a;i++)
			if(b[i]-add > 0)
				min+=(b[i]-add);
		printf("Set #%d\n",c);
		printf("The minimum number of moves is %d.\n",min);
		c++;
	}
	return 0;
}
