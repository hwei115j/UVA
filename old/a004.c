#include <stdio.h>

int main(int argc, char *argv[])
{
    int ad;

    while(scanf("%d",&ad)!=EOF)
		if(ad%4==0&&ad%100!=0)
			printf("閏年\n");
		else if(ad%400==0)
			printf("閏年\n");
		else
			printf("平年\n");+

    return 0;
}

