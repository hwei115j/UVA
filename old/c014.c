#include<stdio.h>
#define MAX 11

int main()
{
	char a[MAX],b[MAX];

	while(scanf("%s %s",a,b) && !((a[0] == '0') && (b[0] =='0')))
	{
		int i = 0,n = 0;
		int flag = 0,f = 0;
		
		while(a[i] != '\0')
			i++;
		while(b[n] != '\0')
			n++;
		
		if(i > n)
			for(;i >= 0;i--,n--)
				if(n >= 0 && (a[i]+b[n])-96+f > 9)
				{
					flag++;
					f = 1;
				}
				else if(n < 0 && a[i]-48+f > 9)
				{
					flag++;
					f = 1;
				}
				else 
					f = 0;
		else
			for(;n >= 0;i--,n--)
				if(i >= 0 && (a[i]+b[n])-96+f > 9)
				{
					flag++;
					f = 1;
				}
				else if(i < 0 && b[n]-48+f > 9)
				{
					flag++;
					f = 1;
				}
				else 
					f = 0;

		if(flag)
			printf((flag == 1)?"1 carry operation.\n":"%d carry operations.\n",flag);
		else
			printf("No carry operation.\n");
	}
	return 0;
}
