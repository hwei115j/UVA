#include<stdio.h>
#include<string.h>

int num(char *str)
{
	int i, add = 0;

	for(i = 0; str[i] != '\0'; i++)
		add+=str[i]-'0';
	
	return add;
}
int main()
{
	char n[15];
	
	scanf("%*d");
	while(scanf("%s", n) != EOF)
		printf((num(n)%3 == 0)?"YES\n":"NO\n");

	return 0;
}
