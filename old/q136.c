#include<stdio.h>
#define MIN(x, y) ((x) > (y))?(y):(x)
#define MAX 1500

int main()
{
	int u_num[MAX] = {1};
	int i, j1 = 0, j2 = 0, j3 = 0;

	for(i = 1; i < MAX; i++)
	{
		for(; j1 < i; j1++)
			if(u_num[j1] * 2 > u_num[i-1])
				break;
		for(; j2 < i; j2++)
			if(u_num[j2] * 3 > u_num[i-1])
				break;
		for(; j3 < i; j3++)
			if(u_num[j3] * 5 > u_num[i-1])
				break;
		u_num[i] = MIN(u_num[j1] * 2, u_num[j2] * 3);		
		u_num[i] = MIN(u_num[i], u_num[j3] * 5);
	}
	printf("The 1500'th ugly number is %d.\n", u_num[MAX-1]);	

	return 0;
}
