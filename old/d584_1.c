#include<stdio.h>

int main()
{
	int i,a;

	while(scanf("%d",&a) != EOF)
	{
		getchar();
		while(getchar() != '\n')
			;
		for(i = 1;i < a;i++)
			printf("%d ",i);
		printf("%d\n",i);
	}
	
	return 0;
}
