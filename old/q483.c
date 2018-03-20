#include<stdio.h>
#include<string.h>
#define MAX 1001

int main()
{
	char str[MAX];
	
	while(scanf("%s", str) != EOF)
	{
		int i = strlen(str);

		while(i--)
			putchar(str[i]);
		if(getchar() != ' ')
			printf("\n");
		else
			printf(" ");		
	}

	return 0;
}
