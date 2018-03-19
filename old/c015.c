#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STRMAX 10
unsigned int reverse(char *,unsigned int);
unsigned int re_atoi(char *,unsigned int);
void int2str(unsigned int,char *);

unsigned int main()
{
    char strint[STRMAX];
    unsigned int i,add; 
    unsigned int count;
    
    scanf("%d",&i);
    while(i-- > 0)
    {
        count = 0;
        scanf("%s",strint);
        while(reverse(strint,strlen(strint)) || count == 0)
        {
            add = atoi(strint);
            add += re_atoi(strint,strlen(strint));
            count++;
            int2str(add,strint);
        }
        printf("%d %d\n",count,add);
    }
    return 0;
}

unsigned int reverse(char *str,unsigned int length)
{
    unsigned int i = 0;
    length--;

    while(1)
    {
        
        if(i == length || (i-1) == length)
            return 0;
        if(str[i] == str[length])
        {
            i++;
            length--;
        }
        else
            return 1;
    }
}
unsigned int re_atoi(char *str,unsigned int length)
{
    char restr[STRMAX];
    unsigned int i;
    
    length--;
    for(i=0;i <= length;i++)
        restr[i] = str[length-i];
    restr[length+1] = '\0';

    return atoi(restr);
}
void int2str(unsigned int i,char *s)
{
    sprintf(s,"%d",i);
}
