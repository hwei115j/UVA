#include<stdio.h>

int main()
{
	int n;	

	while(scanf("%d",&n) != EOF)
		if(n > 40)
			printf("%d\n",100);
		else if(n > 21)
			printf("%d\n",60+20+(n-20));
		else if(n > 11)
			printf("%d\n",60+(n-10)*2);
		else
			printf("%d\n",n*6);

	return 0;
}

