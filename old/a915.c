#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

int main()
{
    int a;
    int flag=0;
    int i,n;
    struct Data
    {
        int num1;
        int num2;
    }num[MAX];
    
    scanf("%d",&a);
    getchar();
    for(i=0;i < a;i++)
    {
        scanf("%d %d",&num[i].num1,&num[i].num2);
        getchar();
    }

    while(flag != -1)
    {
        for(i=0;i < a;i++)
            if(num[a-i].num[i] > num[a-i-1].num[i])
    }
            
    return 0;
}
