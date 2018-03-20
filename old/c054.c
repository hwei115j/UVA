#include<stdio.h>
#define LINE 100

int main()
{
	char keyboard[LINE]={'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
	char c;
	int i;

	while((c = getchar()) != EOF)
	{
		for(i = 0;i < LINE;i++)
			if(c == keyboard[i])
				printf("%c",keyboard[i-1]);
		
		if(c == '\n')
			printf("\n");
		else if(c == ' ')
			printf(" ");
	}

	return 0;
}
