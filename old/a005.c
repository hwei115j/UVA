#include <stdio.h>

int main(int argc, char *argv[])
{
	int i,a,b,c,d;
	
	if(scanf("%d",&i)i==1)

    while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
		if(b/a==d/c)
			printf("%d %d %d %d %d\n",a,b,c,d,d*(d/c));
		else
			printf("%d %d %d %d %d\n",a,b,c,d,d+(d-c));
  
    return 0;
}

