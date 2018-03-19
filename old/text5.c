#include <stdio.h>
#include <string.h>
#define MIN 16
int main(int argc, char *argv[])
{
    char ch[MIN];
    int i;
  
    memset(ch,'*',MIN);
    while(fgets(ch,MIN,stdin)!=NULL)
    {
        for(i=0;i<MIN;i++)
            if(ch[i]!='\n')
                printf("[%c %d]",ch[i],ch[i]);
            else
                printf("[   %d]",ch[i]);
        printf("\n");
    }
        
    return 0;
}

