#include<stdio.h>

int main()
{
	int a,b,add = 0;
	
	scanf("%d%d",&a,&b);
	for(;a <= b;a++)
		if(!(a%4) && (a%100) || !(a%400))
			add++;
		else
			add++;
	printf("%d",add);

	return 0;
}
