#include<stdio.h>
#define MAX 100

int main()
{
	int n,m,a[MAX],b[MAX];
	int i,j;

	scanf("%d",&n);
	j = n;
	while(j-- > 0 && scanf("%d",&m) != EOF)
	{
		int topsec = 100000;
		int addsec = 0;

		for(i = 0;i < m;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
			if(topsec > a[i]*60 + b[i])
				topsec = a[i]*60 + b[i];
		}
		for(i = 0;i < m;i++)
			addsec += a[i]*60 + b[i];
		addsec/=m;
		printf("Track %d:\n",n-j);
		printf("Best Lap: %d minute(s) %d second(s).\n",topsec/60,topsec%60);
		printf("Average: %d minute(s) %d second(s).\n",addsec/60,addsec%60);
	}
	return 0;
}
