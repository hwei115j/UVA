#include <stdio.h>

int main(int argc, char *argv[])
{
	int i[1000],n,z,x;
		
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
		x=0;	
		for(n=0;n<1000;n++)
			if(i[n]==0)
			{
				printf("%d,",n);
				x++;
			}
		printf("%d",x);
    return 0;
}

