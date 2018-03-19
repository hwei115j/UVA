#include <stdio.h>

int main(int argc, char *argv[])
{
    int a,b;
	int s;

    while(scanf("%d %d",&a,&b)!=EOF) 
	{
		s=(a*2+b)%3;
		if(s==0)
			printf("普通\n");
		else if(s==1)
			printf("吉\n");
		else
			printf("大吉\n");
	}
  
    return 0;
}

