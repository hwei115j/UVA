#include<stdio.h>

int main()
{
	int n,i,j;

	while(scanf("%d",&n) != EOF)
	{
		int a = 1;

		n/=2;
		for(i = 0;i < n;i++)
			a*=10;
		for(i = 0;i < a;i++)
			for(j = 0;j < a && i+j < a;j++)
				if((i+j)*(i+j) == i*a+j)
					switch(n)
					{
						case 1:
							printf("%d%d\n",i,j);
							break;
						case 2:
							printf("%02d%02d\n",i,j);
							break;
						case 3:
							printf("%03d%03d\n",i,j);
							break;
						case 4:
							printf("%04d%04d\n",i,j);
							break;
						default:
							break;
					}
	}

	return 0;
}
