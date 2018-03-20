#include<stdio.h>
int num(int);

int main()
{
	int n,t;
	
	scanf("%d",&t);
	while(t-- > 0 && scanf("%d",&n) != EOF)
		printf("%d\n",num(n));
	
	return 0;
}
int num(int n)
{
	return (n/10 == 0)?n:num(n/10)*(n%10);
}
