#include<stdio.h>

int main()
{
	int n,a,b;
	int i,j = 1;
	int n2[33]={0, 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625, 676, 729, 784, 841, 900, 961};	
	while(scanf("%d",&n) != EOF)
		for(j = 1;j <= n;j++)
		{
			int add = 0;

			scanf("%d\n%d",&a,&b);
			for(i = 0;n2[i] <= b;i++)
				if(n2[i] >= a)
					add+=n2[i];
			printf("Case %d: %d\n",j,add);	
		}

	return 0;
}
