#include<stdio.h>

int main()
{
	char c;
	int add = 0;

	while((c = getchar()) != EOF )
	{
		if(c >= '0' && c <= '9')
			add+=(c - '0');
		if(c == '\n')
		{
			printf((add%3 == 0)?"yes\n":"no\n");
			add = 0;
		}
	}
	
	return 0;
}			
