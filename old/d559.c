#include<stdio.h>

int main()
{
	int a;

	while(scanf("%d",&a) != EOF)
		printf("'C' can use printf(\"%%d\",n); to show integer like %d\n",a);
	return 0;
}

