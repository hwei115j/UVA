#include<stdio.h>
#define SWAP(x, y)  do{int SW; SW = x; x = y; y = SW;}while(0)

int main()
{
	char c, letter[26] = {0};
	char table[26] = {0};
	int i, j, flag = 0;
	int max = 0;

	scanf("%*d");
	while((c = getchar()) != EOF)
	{
		if(c >= 'a' && c <= 'z')
			letter[c - 'a']++;
		if(c >= 'A' && c <= 'Z')
			letter[c - 'A']++;
	}
	
	for(i = 0; i < 26; i++)
	{
		if(letter[i] > 0)
			flag++;
		table[i] = letter[i];
	}
	for(i = 0; i < 26; i++)
		for(j = i; j < 26; j++)
			if(table[i] < table[j])
				SWAP(table[i], table[j]);
	for(i = 0; i < 26; i++)
		for(j = 0; j < 26; j++)
			if(letter[j] == table[i] && letter[j])
			{
				printf("%c %d\n", 'A' + j, letter[j]);
				letter[j] = 0;
		/*		if(flag > 1 && printf("\n"))
					flag--;*/
			}	

	return 0;  
}
