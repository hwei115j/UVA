#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c,num[15] = {0};
	int add = 0;
	int i = 0;

	while((c = getchar()) != EOF)
	{
		for(i = 1;c >= '0' && c <= '9';i++)
		{
			num[i-1] = c;
			c = getchar();
		}
		if(i > 0)
		{
			num[i-1] = '\0';
			add+=atoi(num);
			for(i = 0;i < 15;i++)
				num[i] = 0;
			i = 0;
		}
		if(c == '\n')
		{
			printf("%d\n",add);
			for(i = 0;i < 15;i++)
				num[i] = 0;
			add = 0;
			i = 0;
		}			
	}

	return 0;
}
