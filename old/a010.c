#include <stdio.h>

int main(int argc, char *argv[])
{
	int i[1000],a;
	int z,n,x=0,b=0;

    while(scanf("%d",&a)!=EOF) 
	{
		for(n=0;n<1000;n++)			//產生1000以下質數
		{
			for(z=n;z>0;z--)
				if(n%z==0)
					x++;
			if(x==2)
				i[n]=0;
			else
				i[n]=-1;
			x=0;				
		}	
		for(n=0;n<1000;n++)			
			if(i[n]==0)
				while(a%n==0)
				{	
					a/=n;
					i[n]++;
				}
		for(n=999;n>0;n--)
			if(i[n]>0)
			{
				b=n;
				break;
			}
		for(n=0;n<1000;n++)
			if(i[n]>0)			//顯示
			{
				if(i[n]>1)
					printf("%d^%d",n,i[n]);
				else 
					printf("%d",n);
				if(n==b)
				{
					b=0;
					break;
				}
				printf(" * ");
			}
		if(a!=1)
			printf(" * %d\n",a);	
		else
			printf("\n");

// 		for(n=0;n<100;n++)
//			printf("%d\n",i[n]); 
	}
    return 0;
}

