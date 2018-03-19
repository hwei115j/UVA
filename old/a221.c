#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 30

int main()
{
    int a=0,i,n;
    int f;
    char line[MAXLINE],judges[MAXLINE];
    char c,s;

 //   scanf("%d ",&a);
 //   getchar();
	
	while((s=getchar()) != '\n')
		if((c=getchar())=='\n')
		{
			a+=(s-48);
			break;
		}
		else
		{
			a+=(c-48);
			a+=(s-48)*10;
			break;
		}
		
//	printf("%d\n",a);
    for(n=1;a>=n;n++)
    {
        f=1;
        for(i=0;i<MAXLINE && (c=getchar()) != '\n';i++)
        {
            if(c!=' ')
                line[i]=c;
            else
            {
                f=-1;
                i--;
            }
        }
		//printf("%s\n",line);
        for(i=0;i<MAXLINE && (c=getchar()) != '\n';i++)
            judges[i]=c;
        judges[i+1]='\n';
		//printf("%s\n",judges);
        for(i=0;i<MAXLINE && judges[i] != '\n';i++)
            if(line[i] != judges[i])
			{
                f=0;
	//			printf("%c %c \n",line[i],judges[i]);
			}
        if(f == 1)
            printf("Case %d: Yes\n",n);
        else if(f == 0)
            printf("Case %d: Wrong Answer\n",n);
        else 
            printf("Case %d: Output Format Error\n",n);
    }       
    return 0;
}


