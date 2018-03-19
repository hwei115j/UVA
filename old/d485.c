#include<stdio.h>

int main()
{
    unsigned int a;
	int b;
    unsigned char c,d;
    
    scanf("%d %d",&a,&b);
	
    c = (a&1);
    d = (b&1);
    a = (b-a+1)/2;    
    b = ((a-1)*c*d + a*c*!d + a*!c*d + (a+1)*!c*!d);
	if(b >= 0)
		printf("%d\n",b);
	else
		printf("0\n");
   
    return 0;
}
