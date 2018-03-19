#include <stdio.h>
#define MIX 100
int main(int argc, char *argv[])
{
    char str1[MIX],str2[MIX];
    int num[MIX];
	int a=0,b=0;
    int i,n;

    memset(str1,'\0',MIX);
    memset(str2,'\0',MIX);
    while(scanf("%s %s",str1,str2)!=EOF) 
    {
        for(i=0;str1[i]!='\0';i++)
            if(str1[i]=='M')
                num[i]=1000;
            else if(str1[i]=='D')
                num[i]=500;
			else if(str1[i]=='C')
                num[i]=100;
			else if(str1[i]=='L')
                num[i]=50;
			else if(str1[i]=='X')
                num[i]=10;
			else if(str1[i]=='V')
                num[i]=5;
			else if(str1[i]=='I')
                num[i]=1;
		a=num[i-1];
		for(n=i-2;n>0;n--)
			if(num[n]>=num[n-1])
				a+=num[n-1];
			else
				a-=num[n-1];
		
		for(i=0;str2[i]!='\0';i++)
            if(str2[i]=='M')
                num[i]=1000;
            else if(str2[i]=='D')
                num[i]=500;
			else if(str2[i]=='C')
                num[i]=100;
			else if(str2[i]=='L')
                num[i]=50;
			else if(str2[i]=='X')
                num[i]=10;
			else if(str2[i]=='V')
                num[i]=5;
			else if(str2[i]=='I')
                num[i]=1;
		b=num[i-1];
		for(n=i-2;n>0;n--)
			if(num[n]>=num[n-1])
				b+=num[n-1];
			else
				b-=num[n-1];
				
		if(a>b)
			a=a-b;
		else if(a<b)
			a=b-a;
		
    }
  
    return 0;
}

