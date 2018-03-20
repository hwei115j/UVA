#include<stdio.h>
#include<stdlib.h>

int sum(char *s)
{
	int i, add = 0;
	
	for(i = 0; s[i] != '\0'; i++)
		add+=(s[i]-'0');
	if(add/10)
	{
		sprintf(s, "%d", add);
		sum(s);
	}
	else
		return add;	
}

int main()
{
	char str[100];

	while(scanf("%s", str) != EOF && atoi(str)) 
		printf("%d\n", sum(str));

	return 0;
}
