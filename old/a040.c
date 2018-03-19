#include<stdio.h>
#include<string.h>

int main()
{
    int num[20]={1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084, 548834};
    int n,m;
    int i,flag;

    while(scanf("%d %d",&n,&m) != EOF)
    {
        flag = 0;
        for(i=0;i<20;i++)
            if(num[i] >= n && num[i] <= m)
            {
                printf((num[i+1] >= m)?"%d\n":"%d ",num[i]);
                flag++;
            }
        if(flag == 0)
            printf("none\n");
    }
               
    return 0;
}
