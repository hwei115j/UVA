#include<stdio.h>

int sar(int);
int main()
{
	int a,b;
	
	while(scanf("%d%d",&a,&b) != EOF)
		if(!a)
			printf("0\n");
		else if(a == 2)
			printf("%d\n",(b >= 8)*((b-8)*3+sar(b)));
		else
			printf("%d\n",(b >= 10)*((b-10)*3+sar(b)));
		
	return 0;
}
int sar(int i)
{
	if(i >= 120)
		return 6;
	else if(i >= 70)
		return 3;
	else if(i >= 30)
		return 2;
	else
		return 1;
}
