#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LINE 10

int main()
{
    char *str[7]={"ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN","UNKNOWN"};
	char *str_i[7]={"HELLO","HOLA","HALLO","BONJOUR","CIAO","ZDRAVSTVUJTE","0"};
	char stri[LINE];
	int i,n;
	
	scanf("%s",stri);	
	for(n=1;stri[0] != '#' ;n++)
	{
		for(i=0;i<6 && (strcmp(str_i[i],stri) != 0);i++)
			;
		printf("Case %d: %s\n",n,*(str+i));		
		scanf("%s",stri);
    }
}
