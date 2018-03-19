#include <stdio.h>
#include <string.h>
#define MIN 16
int main(int argc, char *argv[])
{
    int i,n;
    int num[5][5]={{1},{1}};
    int ch[5]={0};
    
    for(i=0;i<5;i++)
        for(n=0;n<5;n++)
            printf("num[%d][%d]=%d\n",i,n,num[i][n]);
//        printf("num[%d]=%d ch[%d]=%d\n",i,num[i],i,ch[i]);

    return 0;
}

