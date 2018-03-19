#include<stdio.h>
#include<stdlib.h>
#define MAXNUM 10
#define MAXLINE 1010

int *getint(char *,int *);
int main()
{
    char ch[MAXLINE];
    int *num,num_m[MAXNUM];
    int i;
    int h,m,s,n;   
    while(scanf("%s",ch) != EOF)
    {
        h = m = s = n = 0;
        num = getint(ch,num_m);
        for(i = 0;ch[i] != '\0';i++)
            switch(ch[i])
            {
                case 'h':
                    h++;
                    break;
                case 'm':
                    if(ch[i+1] != 's')
                        m++;
                    else
                        m+=10;
                    break;
                case 's':
                    s++;
                    break;
                case '.':
                    n++;
                    break;
                default :
                    break;
            }
        if(h && !(m+s+n))
            printf("%d\n",num[0]*3600000);
        else if(h && m && !(s+n))
            printf("%d\n",num[0]*3600000+num[1]*60000);
        else if(h && m && s && !n)
            printf("%d\n",num[0]*3600000+num[1]*60000+num[2]*1000);
        else if(!(h+s+n) && m)
            printf("%d\n",num[0]*60000);
        else if(m == 10)
            printf("%d\n",num[0]);
        else if(!(h+n) && m == 1 && s)
            printf("%d\n",num[0]*60000+num[1]*1000);
        else if(!(h+m+n) && s)
            printf("%d\n",num[0]*1000);
        else if(!(h+m) && s && n)
            printf("%d\n",num[0]*1000+num[1]*100);
    }
    return 0;
}
int *getint(char *str,int *num)
{
    char strnum[MAXLINE];
    int i,n;
    int cou = 0;

    for(i = 0;str[i] != '\0';i++)
    {
        n = 0;
        for(;str[i] >= '0' && str[i] <= '9';i++)
        {
            strnum[n] = str[i];       
            n++;
        }
        strnum[n] = '\n';
        num[cou] = atoi(strnum);
        cou++;
    }
    
    return num;
}
