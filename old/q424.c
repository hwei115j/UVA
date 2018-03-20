#include<stdio.h>
#include<string.h>

#define NUM 1010
#define MAX 110

void adder(char *a, char *b)
{
	int i, j, c;

	for(i = strlen(b)-1, j = 0; i >= 0; i--, j++)
		if(a[j] != '\0')
		{
			a[j] = (a[j]-'0') + (b[i]-'0');
			c = a[j]/10;
			a[j] = (a[j] - c*10) + '0';
			if(a[j+1] != '\0')
				a[j+1] += c;
			else
				a[j+1] = c + '0';
		}
		else
			a[j] = b[i];
} 

int renum(char *str)
{
	return (str[1] != '\0')?renum(&str[1]) && putchar(str[0]):putchar(str[0]);
}
int main()
{
	char num[NUM][MAX] = {0};
	char add[260] = {0};
	int i;

	for(i = 0; scanf("%s", num[i]) && num[i][0] != '0'; i++)
		;
	for(i = 0; num[i][0] != '0'; i++)
		adder(add, num[i]);
	for(i = 0; add[i] != '\0'; i++)
		;
	if(add[i-1] < '1' || add[i-1] > '9')
		add[i-1] = '\0';	
	
	printf("\n", renum(add));
	return 0;
}
