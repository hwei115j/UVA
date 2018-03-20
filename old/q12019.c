#include<stdio.h>

int main()
{
	int m, d;
	int num[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char *week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday"\
						, "Friday", "Saturday", "Sunday"};

	scanf("%*d");
	while(scanf("%d%d", &m, &d) != EOF)
	{	
		int i, add = 0;

		for(i = 0; i < m; i++)
			add+=num[i];
		printf("%s\n", week[(add + d + 4)%7]);
	}

	return 0;
}
