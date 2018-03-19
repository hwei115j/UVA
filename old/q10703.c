#include<stdio.h>
#define MAX 505
#define mswap(a, b) do{if(a > b){int reg;reg = a;a = b;b = reg;}}while(0)

int main()
{
    int w, h, n;

    while(scanf("%d%d%d", &w, &h, &n) != EOF && w)
    {
        char rect[MAX][MAX] = {0};
        int x1, x2, y1, y2;
        int i, a, b, add = 0;
        
        for(i = 0; i < n; i++)
        {
            scanf("%u%u%u%u", &x1, &y1, &x2, &y2);
            mswap(x1, x2);
            mswap(y1, y2);
            for(a = x1; a <= x2; a++)
                for(b = y1; b <= y2; b++)
                    rect[a][b] = 1;
        }
        for(a = 1; a <= w; a++)
            for(b = 1; b <= h; b++)
                if(!rect[a][b])
                    add++;
        if (add == 0)    
            printf("There is no empty spots.\n");    
        else if (add == 1)    
            printf("There is one empty spot.\n");    
        else    
            printf("There are %d empty spots.\n",add);    
    }
    
    return 0;
}
