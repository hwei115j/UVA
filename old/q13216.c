#include<stdio.h>
#define MAX 1001

int main()
{
	int reg[] = {76, 16, 56, 96, 36, 76, 16,\
					56, 96, 36};
	char num[MAX];

	scanf("%*d");
	while(scanf("%s", num) != EOF)
	{
		int i;

		for(i = 0; num[i] != '\0'; i++)
			;
		i--;
		if(i == 0 && (num[i] - '0') <= 1)
			printf((num[i] - '0' == 1)?"66\n":"1\n");
		else
			printf("%d\n", reg[(num[i] - '0') % 10]);
	}

	return 0;
}
