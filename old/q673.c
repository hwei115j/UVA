#include<stdio.h>
#define MAX 130

int main()
{
	int n;
	char str[MAX];
	char stack[MAX] = {0};

	scanf("%d", &n);
	getchar();
	while(n-- > 0)
	{
		int i, sp = 1;
		char c;

		if((c = getchar()) != '\n')
		{	
			ungetc(c, stdin);
			scanf("%[^\n]", str);
			getchar();
			for(i = 0; str[i] != '\0'; i++)
				if(str[i] == ')' && stack[sp-1] == '(')
					sp--;
				else if(str[i] == ']' && stack[sp-1] == '[')
					sp--;
				else if(str[i] == ' ')
					;
				else 
					stack[sp++] = str[i];
		}
		printf((sp == 1)?"Yes\n":"No\n");	
	}
	
	return 0;
}
