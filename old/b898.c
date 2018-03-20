#include<stdio.h>

int main()
{
	int a,b,c;

	scanf("%*d");
	
	while(scanf("%d%d%d",&a,&b,&c) != EOF)
		if(a > b)
			printf("%d\n",(a>c)?a:c);
		else
			printf("%d\n",(b>c)?b:c);
	
	return 0;

}
