#include<stdio.h>
#define IN 9

int main()
{
	int in[IN];
	char str[IN][10] = {0};

	while(scanf("%d", &in[8]) != EOF)
	{
		int flag[IN] = {0};

		for(i = 7; i >= 0 && scanf("%d", in[i]); i--)
			if(in[i] < 0 && ++flag[i])
				in[i] = -in[i];
		if(in[8] < 0 && ++flag[8])
			in[8] = -in[8];
		for(i = 0; i < IN; i++)
		{
			sprintf(str[i], "%d", in[i]);
			if(in[i] == 1)
				str[i] = '\0';
		}					/*字串已處理完成*/
		for(i = 0; i < IN; i++)
			if(i)
			{

			}
	}
}
