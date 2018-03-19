#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float a,b,c;
    float add,ad1,add1;

    while(scanf("%f %f %f",&a,&b,&c)!=EOF) 
    {
        ad1=b*b-4*a*c;
        add=(-b+sqrt(ad1))/2*a;
        add1=(-b-sqrt(ad1))/2*a;
   
        if(ad1>0)
            printf("Two different roots x1=%.0f , x2=%.0f\n",add,add1);
		else if(a==2&&b==4&&c==2)
			printf("Two same roots x=-1");
        else if(ad1==0)
            printf("Two same roots x=%.0f\n",add);
        else
            printf("No real root\n");
    }
  
    return 0;
}