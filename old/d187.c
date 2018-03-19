#include<stdio.h>
#define MAXLINE 101

int main()
{
    char line[MAXLINE];
    int i,j,t;

    scanf("%d",&t);
    getchar();
    for(i = 1;i <= t;i++)
    {
        int add = 0;

        for(j = 0;(line[j] = getchar()) != '\n';j++)
            ;
        line[j] = '\0';
        for(j = 0;line[j] != '\0';j++)
            if(line[j] == ' ')
                add++;
            else if(line[j] <= 'o')
                add+=((line[j]-1)%3+1);
            else if(line[j] >= 'w')
                add+=(line[j]-118);
            else if(line[j] >= 't')
                add+=(line[j]-115);
            else
                add+=(line[j]-111);
        printf("Case #%d: %d\n",i,add);
    }

    return 0;
}
