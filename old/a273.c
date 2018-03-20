#include<stdio.h>

int main()
{
	int n,k;

	while(scanf("%d%d",&n,&k) != EOF)
	if(k)
		printf((n%k)?"Impossib1e!\n":"Ok!\n");
	else if (!n)
		printf("Ok\n");
	else
		printf("Impossib1e!\n");

	return 0;
}
