#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;

    while(scanf("%d",&a)!=EOF) 
		if(a!=0)
			printf("%d\n",((a+1)*(2*a+1)*a)/6);
    return 0;
}

