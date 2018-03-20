#include<stdio.h>

int main()
{
	int x,y;

	scanf("%d%d",&x,&y);
	x+=((y+30)/60);
	printf("%02d:%02d\n",(x+2)%24,(y+30)%60);

	return 0;
}
