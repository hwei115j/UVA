#include<stdio.h>
#define MAX 101
#define WIN(x, y) do{win[x]++; lose[y]++;}while(0)
int main()
{
    int n, k, f = 0;
    
    while(scanf("%d%d", &n, &k) != EOF && n)
    {
        int win[MAX] = {0}, lose[MAX] = {0};
        int p1, p2;
        int i, k2 = k*n*(n-1)/2;
        int w = 0, l = 0;
        char s1[10], s2[10];

        scanf("%*[^\n]%*c");
        if(f)
            printf("\n");    
        while(k2-- > 0 && scanf("%d %s %d %s", &p1, s1, &p2, s2) != EOF)
        {
            if(s1[0] == 'p' && s2[0] == 'r')
                WIN(p1, p2);
            else if(s1[0] == 'r' && s2[0] == 's')
                WIN(p1, p2);
            else if(s1[0] == 's' && s2[0] == 'p')
                WIN(p1, p2);
            else if(s1[0] == 'r' && s2[0] == 'p') /**/
                WIN(p2, p1);
            else if(s1[0] == 's' && s2[0] == 'r')
                WIN(p2, p1);
            else if(s1[0] == 'p' && s2[0] == 's')
                WIN(p2, p1);
        }
        scanf("%*[^\n]%*c");
        for(i = 1; i <= n; i++)
        {
            if (!win[i] && !lose[i])
                printf("-\n");
            else if(!win[i])
                printf("0.000\n");
            else
                printf("%.3lf\n", (double)win[i]/(double)(win[i] + lose[i]));
        }
        f = 1;
    }
   
    return 0; 
}
