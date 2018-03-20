#include<stdio.h>
#include<string.h>

#define GBC(x, y, z) ((x##2+x##3) + (y##1+y##3) + (z##1+z##2))
#define MIN(x, y, z) do{if(x > y){strcpy(str, z); x = y;}}while(0)

int main()
{
	int g1, g2, g3;
	int b1, b2, b3;
	int c1, c2, c3;

	while(scanf("%d%d%d %d%d%d %d%d%d", \
				&b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF)
	{
		int min, reg;
		char str[10] = "BCG";

		min = GBC(b, c, g);
		
		reg = GBC(b, g, c);
		MIN(min, reg, "BGC");

		reg = GBC(c, b, g);
		MIN(min, reg, "CBG");

		reg = GBC(c, g, b);
		MIN(min, reg, "CGB");

		reg = GBC(g, b, c);
		MIN(min, reg, "GBC");

		reg = GBC(g, c, b);
		MIN(min, reg, "GCB");

		printf("%s %d\n", str, min);
	}

	return 0;
}
