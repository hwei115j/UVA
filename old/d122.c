#include<stdio.h>

int fan(int);
int main()
{
	int n;
	
	while(scanf("%d",&n) != EOF)
		printf("%d\n",fan(n));

	return 0;
}
int fan(int n)
{
	return (n == 0)?0:(fan(n/5)+n/5);
}
