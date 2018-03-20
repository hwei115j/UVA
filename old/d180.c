#include<stdio.h>

int main()
{
	int n,i;
	int a;
	int le = 0,ri = 0;

	scanf("%d",&n);
	for(i = 1;i <= n;i++)
		if(i%2)
		{
			scanf("%d",&a);
			le+=a;
		}
		else
		{
			scanf("%d",&a);
			ri+=a;
		}
	printf((le > ri)?"left\n":"right\n");

	return 0;
}
