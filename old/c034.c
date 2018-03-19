#include<stdio.h>
#define MAX 105

int main()
{
    char num[MAX];
    unsigned char add[MAX] = {0};
    int i;
    int flag;

    while(scanf("%s",num) && num[0] != '0')
    {
        flag = 0;
        for(i = 0;num[i] != '\0';i++)
            ;
        while(--i >= 0)
        {
            add[flag]+=(num[i] - '0');
            if(add[flag] > 9)
            {
                if((add[flag]-=10) < 9)
                    add[flag+1]++;
                else
                {
                    add[flag]-=10;
                    add[flag+1]++;
                }
            }
            flag++;
        }
    }
    for(i = 0;i < MAX;i++)
	{
		if(add[i] > 9)
		{
			if((add[i]-=10) > 9)
            {
                add[i]-=10;
                add[i+1]++;
            }
            add[i+1]++;
		}
        if(add[i] > 0)
            flag = i;
	}
    for(i = flag;i >= 0;i--)
        printf("%d",add[i]);
    printf("\n");
    
    return 0;
}
