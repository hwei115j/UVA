#include<stdio.h>
#define MAX 50
#define WORD(x) str[0] == x 

int main()
{
	char str[MAX];
	int i;

	while(scanf("%s", str) != EOF)
	{
		if(WORD('a') || WORD('e') || WORD('i') || WORD('o') || WORD('u')\
			|| WORD('A') || WORD('E') || WORD('I') || WORD('O') || WORD('U'))
		{
			int flag = 0;

			for(i = 0; str[i] != '\0'; i++)
				if(str[i] != '.')
					putchar(str[i]);
				else
					flag = 1;
			if(flag)
				printf("ay.\n");
			else
				printf("ay ");	
		}
		else
		{
			int flag = 0;

			for(i = 1; str[i] != '\0'; i++)
				if(str[i] != '.')
					putchar(str[i]);
				else
					flag = 1;
			if(flag)
				printf("%cay.\n", str[0]);
			else
				printf("%cay ", str[0]);				
		}
			
	}
	return 0;
}
