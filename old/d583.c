#include<stdio.h>
#define MAX 100001
struct number
{
	unsigned num:1;
};

int main()
{
	int n,i,j;
	int a;
	struct number b[MAX];
	
	while(scanf("%d",&n) != EOF)
	{
		j = 0;
		for(i = 0;i <= n;i++)
			b[i].num = 0;
		for(i = 0;i < n;i++)
		{
			scanf("%d",&a);
			b[a].num = 1;
		}
		for(i = 1;i <= n;i++)
		{
			if(b[i].num)
			{
				j++;
				printf((i == n)?"%d\n":"%d ",i);
			}
		}
	}

	return 0;
}
