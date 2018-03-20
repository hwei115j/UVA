#include<stdio.h>

int main()
{
	int k;
	int n, m;
	int x, y;

	while(scanf("%d", &k) != EOF && k)
	{
		scanf("%d%d", &n, &m);
		while(k-- && scanf("%d%d", &x, &y) != EOF)
			if(x == n || y == m)
				printf("divisa\n");
			else if(x > n && y > m)
				printf("NE\n");
			else if(x < n && y > m)
				printf("NO\n");
			else if(x < n && y < m)
				printf("SO\n");
			else
				printf("SE\n");
	}

	return 0;
}
