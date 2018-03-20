#include<stdio.h>
#include<string.h>
#include<math.h>

#define NUM 50

int handle(char *num)
{
	int i, n = strlen(num);
	int reg = 0;
	
	for(i = 1; i <= n; i++)
		if(num[i-1] >= '0' && num[i-1] <= '9')
			reg += (num[i-1] - '0') * pow(36, n-i);
		else
			reg += (num[i-1] - 'A' + 10) * pow(36, n-i);

	return reg;			
}
void carry(int num, int _carry, char *str)
{
	int i;

	if(_carry <= num)
	{
		carry((num - num % _carry)/_carry, _carry, str);
		for(i = 0; str[i] != '\0';i++)
			;
		str[i] = (num % _carry)	+ '0';	
	}
	else
		str[0] = num + '0';		
} 	
int main()
{
	char num_x[NUM], num_y[NUM];
	int inumx, inumy;

	while(scanf("%s%s", num_x, num_y) != EOF)
	{
		char ax[40][NUM] = {0}, ay[40][NUM] = {0}; 
		int i, j, flag = 0;

		inumx = handle(num_x);
		inumy = handle(num_y);
		for(i = 2; i <= 36; i++)
		{
			carry(inumx, i, ax[i]);
			carry(inumy, i, ay[i]);
		}
		for(i = 2; i <= 36 && !flag; i++)
			for(j = 2; j <= 36 && !flag; j++)
				if(!strcmp(ax[i], ay[j]))
					flag++;
		i--;
		if(flag)
			printf("%s (base %d) = %s (base %d)\n", num_x, i, num_y, j);
		else
			printf("%s is not equal to %s in any base 2..36\n", num_x, num_y);
	} 

	return 0;
}
