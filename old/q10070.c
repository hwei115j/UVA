#include<stdio.h>
#include<string.h>

#define MAX 1000

int mod(char *s, int n)
{
    int w, i = 0, sum = 0, sum1 = 0;

    switch(n)
    {
        case 4:
            while(s[i] != '\0')
                i++;
            sum+=s[i-1]-'0' + (s[i-2]-'0')*10;

            return sum%4;
        case 15:
            return (mod(s, 3) || mod(s, 5));
        case 55:
            return (mod(s, 5) || mod(s, 11));
        case 100:
            while(s[i] != '\0')
                i++;
            sum +=s[i-1]-'0' + s[i-2]-'0';

            return sum;
        case 400:
            while(s[i] != '\0')
                i++;
            sum += s[i-1]-'0' + (s[i-2]-'0')*10 + (s[i-3]-'0')*100 + (s[i-4]-'0')*1000;

            return sum%400;
        case 3:
            while(s[i] != '\0')
                sum+=s[i++]-'0';
            
            return sum%3;
        case 5:
            while(s[i] != '\0')
                i++;
            sum += s[i-1]-'0';

            return sum%5;
        case 11:
            w = strlen(s);
            for(i = 0; i < w ; i+=2)
                sum+=s[i]-'0';
            for(i = 1; i < w; i+=2)
                sum1+=s[i]-'0';
            
            return (sum-sum1)%11;
    }

    return 1;
}
int main()
{
    char c[MAX];
    int s = 0;

    while(scanf("%s", c) != EOF)
    {
        int flag = 0, f = 0;

        if(s)
            printf("\n");
        if((!mod(c, 4) && mod(c, 100) || !mod(c, 400)) && ++f)
            printf("This is leap year.\n") && flag++;
        if(!mod(c, 15))
            printf("This is huluculu festival year.\n") && flag++;
        if(f && !mod(c, 55))
            printf("This is bulukulu festival year.\n") && flag++;
        if(!flag)
            printf("This is an ordinary year.\n");
        s = 1;
    }
    
    return 0;
}
