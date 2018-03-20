#include<stdio.h>
#include<string.h>

#define MAX 30

int letter(char *s, int n)
{
	int i;

	for(i = 0; s[i] != '\0'; i++)
		;

	switch(n)
	{
		case 0:
			if(s[i-1] == 'y' && s[i-2] != 'a' && s[i-2] != 'e' && s[i-2] != 'i'\
			&& s[i-2] != 'o' && s[i-2] != 'u')
			{
				s[i-1] = 'i';
				s[i] = 'e';
				s[i+1] = 's';
				s[i+2] = '\0';
				return 1;
			}
			return 0;
		case 1:
			if(s[i-1] == 'o' || s[i-1] == 's' || s[i-1] == 'x')
				return 1;
			return 0;
		case 2:
			if(s[i-1] == 'h' && (s[i-2] == 'c' || s[i-2] == 's'))
				return 1;
			return 0;
	}
	return 0;
} 
int main()
{
	int l, n;

	while(scanf("%d%d", &l, &n) !=  EOF)
	{
		int i, j;
		char list1[MAX][MAX], list2[MAX][MAX];
		char test[MAX];

		for(i = 0; i < l; i++)
			scanf("%s%s", list1[i], list2[i]);
		for(i = 0; i < n && scanf("%s", test) != EOF; i++)
		{
			for(j = 0; j < l; j++)
			{
				if(strlen(test) == strlen(list1[j]) &&\
				 !strncmp(test, list1[j], strlen(test)))
					break;
			}
			if(j != l)
				printf("%s\n", list2[j]);
			else if(letter(test, 0))
				printf("%s\n", test);
			else if(letter(test, 1) || letter(test, 2))
				printf("%ses\n", test);
			else
				printf("%ss\n", test);
		}
	}

	return 0;
}
