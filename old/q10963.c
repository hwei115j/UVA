#include<stdio.h>

int main()
{
    int a, w, y1, y2;
    int diff, f = 0;

    scanf("%d", &a);
    while(a-- > 0 && scanf("%d", &w) != EOF)
    {
        int i, ok = 1;

        printf((f)?"\n":"");

        scanf("%d %d", &y1, &y2);
        diff = y1 - y2;
        for(i = 1; i < w && scanf("%d %d", &y1, &y2) != EOF; i++)
            if(diff != (y1 - y2))
                ok = 0;
        printf((ok == 0)?"no\n":"yes\n");
        f = 1;
    }

    return 0;
}
