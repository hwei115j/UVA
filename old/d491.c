#include<stdio.h>

int main()
{
	int a,b,sp;
	int i,add = 0;
	scanf("%d%d",&a,&b);
	if(a > b)
	{
		sp = a;
		a = b;
		b = sp;
	}
	if(a&1)
		for(i = a+1;i <= b;i+=2)
			add+=i;
	else
		for(i = a;i <= b;i+=2)
			add+=i;
	printf("%d",add);
			
	return 0;
}
