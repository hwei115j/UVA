#include<stdio.h>

int main()
{
	int n;
	
	while(scanf("%d",&n) != EOF)
	{
		int i = n;
		double a,add = 0;
		
		while(i-- > 0)
		{
			scanf("%lf",&a);
			add+=a;
		}
		printf(((double)(add/n) > 59)?"no\n":"yes\n");
	}
	return 0;
}
