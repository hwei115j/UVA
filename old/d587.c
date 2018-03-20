#include<stdio.h>

int main()
{
	int a,b;
	
	while(scanf("%d",&a) != EOF)
	{
		int i,n1,n2,n3;

		n1 = n2 = n3 = 0;
		for(i = 0;i < a;i++)
		{
			scanf("%d",&b);
			switch(b)
			{
				case 1:
					n1++;
					break;
				case 2:
					n2++;
					break;
				default:
					n3++;
					break;
			}
		}
		for(i = 0;i < n1;i++)
			printf(!i?"1":" 1");
		for(i = 0;i < n2;i++)
			printf(!i&&!n1?"2":" 2");
		for(i = 0;i < n3;i++)
			printf(!i&&!n1&&!n2?"3":" 3");
		printf("\n");
	}
	return 0;
}
