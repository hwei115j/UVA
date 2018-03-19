#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 30

void push (double,double *);
double pop(double *);
int sp=0;


int main()
{
	double val[MAX];
    int i=0;
    char c,str[MAX];
    double p2;

    while((c=getchar()) != '\n')
    {
        while(isdigit(c))      //緩衝區
        {
            str[i++]=c;
            if((c=getchar())==' ')
            {
                str[i]='\0';
                push(atof(str),val);
                i=0;
            }
        }
        switch(c)
        {
        case '+':
            push(pop(val)+pop(val),val);
            break;
        case '-':
            p2=pop(val);
            push(pop(val)-p2,val);
            break;
        case '*':
            push(pop(val)*pop(val),val);
            break;
        case '/':
            p2=pop(val);
            push(pop(val)/p2,val);
            break;
        }
    }
    printf("%g\n",pop(val));
    return 0;
}

void push (double f,double *sk)
{
	*(sk+sp)=f;
	sp++;
}
double pop(double *sk)
{
	sp--;
    return *(sk+sp);
}


