#include<stdio.h>

int main()
{
	int a,b,c;

	scanf("%d%d%d",&a,&b,&c);
	if(a > b)
		printf("%d",(a > c)?a:c);
	else	
		printf("%d",(b > c)?b:c);

	return 0;
}
