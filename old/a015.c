#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int a,b;
    int i,n;
    int xy[100][100];

    while(scanf("%d %d",&a,&b)!=EOF) 
    {
         for(i=0;i<a;i++)
            for(n=0;n<b;n++)
                scanf("%d",&xy[i][n]);
        for(n=0;n<b;n++)
        {
            for(i=0;i<a;i++)
                if(i!=a-1)
                    printf("%d ",xy[i][n]);
                else
                    printf("%d",xy[i][n]);
            printf("\n");
        }
    }
    return 0;
}
