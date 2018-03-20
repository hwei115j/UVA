#include<stdio.h>

int main()
{
	int n,i,max = 0;

	scanf("%d",&n);
	while(scanf("%d",i) != EOF && n-- > 0)
		if(max < i)
			max = i;
	printf("%d",max);
	
	return 0;
}
