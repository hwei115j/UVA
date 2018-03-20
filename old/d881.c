#include<stdio.h>

int main()
{
	unsigned int d,i;

	while(scanf("%d",&d) != EOF)
	{
		unsigned int add = 0,j = 1;;

		for(i = 1;i <= 50;i++)
		{
			add += (1+i*(i-1)/2*d);
		}
		printf("%d\n",add);
	}
	
	return 0;
}
