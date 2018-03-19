#include<stdio.h>
#include<math.h>

#define MAX 10
#define SWAP(x, y) do{double A; A = x; x = y; y = A;}while(0)

int main()
{
	double rx1[MAX], rx2[MAX], ry1[MAX], ry2[MAX];
    double cx[MAX] = {0}, cy[MAX] = {0}, cr[MAX] = {0};
	double x, y;
	char c, ch[MAX] = {0};
	int i, j, n;

	for(i = 0; (c = getchar()) != '*'; i++)
	{
        ch[i] = c;
        if(c == 'r')
        {
            scanf("%lf%lf%lf%lf", &rx1[i], &ry1[i], &rx2[i], &ry2[i]);
            if(rx1[i] < rx2[i])
                SWAP(rx1[i], rx2[i]);
            if(ry1[i] < ry2[i])
                SWAP(ry1[i], ry2[i]);
        }
        else
            scanf("%lf%lf%lf", &cx[i], &cy[i], &cr[i]);
        scanf("%[^\n]*s");
        getchar();
	}
	for(n = 0; scanf("%lf%lf", &x, &y) && (x != 9999.9 || y != 9999.9); n++)
	{
		int flag = 0;

		for(j = 0; j < i; j++)
            if(ch[j] == 'r')
            {
                if(x < rx1[j] && x > rx2[j] && y < ry1[j] && y > ry2[j] && ++flag)
                    printf("Point %d is contained in figure %d\n", n+1, j+1);
            }
            else
            {
                if(cr[j] > sqrt((cx[j] - x)*(cx[j] - x) + \
                 (cy[j] - y)*(cy[j] - y)) && ++flag)
                    printf("Point %d is contained in figure %d\n", n+1, j+1);
            }
		if(!flag)
			printf("Point %d is not contained in any figure\n", n+1);
	}

	return 0;
}
