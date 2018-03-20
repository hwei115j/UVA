#include<stdio.h>
#include<string.h>

#define MAX 201
#define JUDGE(x) \
	(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'y')

char func(char *str)
{
	int i, n[3] = {0};
	int f;

	for(i = 0, f = 0; str[i] != '\0'; i++)
	{
		if(JUDGE(str[i]) && !JUDGE(str[i+1]))
			n[f]++;
		if(str[i] == '/')
			f++;
	}
	
	if(n[0] == 5 && n[1] == 7 && n[2] == 5)
		return 'Y';
	if(n[0] != 5)
		return '1';
	if(n[1] != 7)
		return '2';
	if(n[2] != 5)
		return '3';
}
int main()
{
	char str[MAX];

	while(gets(str) != NULL && strcmp(str, "e/o/i"))
		printf("%c\n", func(str)); 

	return 0;
}
