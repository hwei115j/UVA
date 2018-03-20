#include<stdio.h>

int main()
{
	int servant[7]={0};
	char *servant_n[7]={"Saber","Lancer","Archer","Rider","Caster","Assassin","Berserker"};
	char c;
	int i,max = 0;
	
	while((c = getchar()) != EOF)
	{
		if(c >= 'A' && c <= 'Z')
			servant[(c-'A')%7]++;
		else if (c >= 'a' && c <= 'z')	
			servant[(c-'a')%7]++;
	}
	for(i = 0;i < 7;i++)
			if(max < servant[i])
				max = servant[i];
	for(i = 0;i < 7;i++)
		if(servant[i] == max)
		{
			printf("%s",servant_n[i]);
			break;
		}
	
	return 0;
}

