#include<stdio.h>

int main()
{
	int n,i,j;
	
	while(scanf("%d",&n) != EOF)
	{
		if(!(n&1))  
			i = (n/2)*1+((n-2)/2)*2+1;
		else
			i = (n-1)/2*1+((n-1)/2)*2+1;
		
		if(i == 1)
			printf("3\n");
		else if(n != 1 && n != 2 && !(n&1))
			printf("%d\n",i+1);
		else
			printf("%d\n",i);
		
			
	}
	return 0;
}
