#include<stdio.h>

int main()
{
	unsigned int a,b,c;
	
	while(scanf("%d%d%d",&a,&b,&c) != EOF)
		if(a > b && a > c)
			if(b > c)
				printf((a > (b+c))?"A\n":"B\n");
			else
				printf((a > (b+c))?"A\n":"C\n");
		else if(b > a && b > c)
			if(a > c)
				printf((b > (a+c))?"B\n":"A\n");
			else
				printf((b > (a+c))?"B\n":"C\n");
		else if(c > a && c > b) 
			if(a > b)
				printf((c > (a+b))?"C\n":"A\n");
			else	
				printf((c > (a+b))?"C\n":"B\n");

	return 0;
}
