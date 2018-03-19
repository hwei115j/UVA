#include<stdio.h>

int main()
{
    int b[3],g[3],c[3];
    int add[6];
    int i;
    
    while(scanf("%d%d%d",&b[0],&g[0],&c[0]) != EOF)
    {
        int flag,n;
     
        flag = n = 0;
        for(i = 1;i < 3;i++)
            scanf("%d%d%d",&b[i],&g[i],&c[i]);
        add[0] = b[1]+b[2] + g[0]+g[2] + c[0]+c[1];  
        add[1] = b[1]+b[2] + g[0]+g[1] + c[0]+c[2];   

        add[2] = b[0]+b[2] + g[1]+g[2] + c[0]+c[1];  
        add[3] = b[0]+b[1] + g[1]+g[2] + c[0]+c[2];  

        add[4] = b[0]+b[1] + g[0]+g[2] + c[1]+c[2];  
        add[5] = b[0]+b[2] + g[0]+g[1] + c[1]+c[2];  
        
        for(i = 0;i < 6;i++)
            if(flag < add[i])
            {
                flag = add[i];
                n = i;
            }
        switch(n)
        {
         }    
    }
}
