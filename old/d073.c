#include<stdio.h>

int main()
{
	int n;

	scanf("%d",&n);
	printf("%d",n/3+(n%3 > 0)*1);	

	return 0;
}
