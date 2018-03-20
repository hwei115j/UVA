#include<stdio.h>

int main()
{
	int n;
	char str[10];
	int kill,assist,die,f,a;

	kill = assist = die = f = 0;
	scanf("%d",&n);
	while(n-- > 0)
	{
		scanf("%s",str);
		a = 1;
		f++;
		if(str[0] == 'G' && str[4] == 'K')
			kill++;
		else if(str[0] == 'G' && str[4] == 'A')
		{
			assist++;
			a = 0;
			f--;
		}
		else if(str[0] == 'D')
		{
			die++;
			if(f <= 3)
				printf("You have been slained.\n");
			else
				printf("SHUTDOWN.\n");
			f = 0;
		}
		if(f && f < 3 && a)
			printf("You have slain an enemie.\n");
		else if(f > 2 && a)
			switch (f)
			{
				case 3:
					printf("KILLING SPREE!\n");
					break;
				case 4:
					printf("RAMPAGE~\n");
					break;
				case 5:
					printf("UNSTOPPABLE!\n");
					break;
				case 6:
					printf("DOMINATING!\n");
					break;
				case 7:
					printf("GUALIKE!\n");
					break;	
				default:
					printf("LEGENDARY!\n");
					break;	
			}
	}
	printf("%d/%d/%d\n",kill,die,assist);

	return 0;
}
