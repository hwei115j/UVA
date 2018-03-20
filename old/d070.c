#include<stdio.h>

int main()
{
	int n;

	while(scanf("%d",&n) != EOF && n)
		if(!(n%4) && (n%100) || !(n%400))
			printf("a leap year\n");
		else
			printf("a normal year\n");
		
	return 0;
}
