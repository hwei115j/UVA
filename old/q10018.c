#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 500
unsigned int atoi_64(char *str)
{
	if(str[1] != '\0')
		return atoi_64(&str[1])*10 + (unsigned int)(str[0] - '0');
	else
		return (unsigned int)(str[0] - '0');
}
char *restr(char *str, char *rstr)
{
	int i, n;
	
	for(i = strlen(str)-1, n = 0; i >= 0; i--, n++)
		rstr[n] = str[i];
	rstr[n] = '\0';

	return rstr;
}
int main()
{
	char n[MAX], nstr[MAX];
	char rstr[MAX];
	unsigned int num;

	scanf("%*d");
	while(scanf("%s", &n) != EOF)
	{
		int i = 0;

		do
		{
			num = atoi(n) + atoi(restr(n, rstr));	
			sprintf(nstr, "%u", num);
			i++;
		}while(restr(nstr, n) && num != atoi_64(nstr));
		printf("%d %u\n", i, num);
	}
}
