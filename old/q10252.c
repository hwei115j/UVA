#include<stdio.h>
#define MAX 1001

int main()
{
	char str1[MAX], str2[MAX];

	while(gets(str1) != NULL)
	{
		int j, ch[123] = {0};
		char i;

		gets(str2);
		for(i = 'a'; i <= 'z'; i++)
		{
			int a1 = 0, a2 = 0;

			for(j = 0; str1[j] != '\0'; j++)
				if(str1[j] == i)
					a1++;
			for(j = 0; str2[j] != '\0'; j++)
				if(str2[j] == i)
					a2++;
			while(a1-- && a2--)
				ch[i]++;			
		}
		for(i = 'a'; i <= 'z'; i++)
			while(ch[i]--)
				printf("%c", i);
		printf("\n");
	}

	return 0;
}
