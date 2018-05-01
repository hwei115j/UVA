#include <stdio.h>
#define MAX 100

typedef struct
{
    char pa[10];
}data_s;

typedef struct      //堆疊
{
    data_s data[MAX];
    int top;
}stack;

data_s pop(stack *obj)
{
    return obj->data[--obj->top];
}

void push(stack *obj, data_s vu)
{
    obj->data[obj->top++] = vu;
}


int isref(stack *ref, int n)    //略過top = 0的堆疊，尋找下n個的位置，如果找不到則return 0
{
    int i, flag = 0;

    for(i = 1;flag < n && ref[i].top != -1; i++)
        if(ref[i].top)
            flag++;
    if(flag == n)
        return i - 1;
    return 0;
}

int func(stack *ref, stack *pone)   //查ref、pone堆疊的最上層的值是否符合Match
{

    if(ref->data[ref->top - 1].pa[0] == pone->data[pone->top - 1].pa[0] \
       || ref->data[ref->top - 1].pa[1] == pone->data[pone->top - 1].pa[1])
    {
        data_s reg1 = pop(ref), reg2 = pop(pone);
        push(pone, reg2);
        push(pone, reg1);
        
        return 1;
    }

    return 0;
/*    if(ref == pone)
        printf("err\n");
    data_s reg1 = pop(ref), reg2 = pop(pone);

    if(reg1.pa[0] == reg2.pa[0] || reg1.pa[1] == reg2.pa[1])
    {
        push(pone, reg2);
        push(pone, reg1);
        
        return 1;
    }

    push(ref, reg1);
    push(pone, reg2);
   
    return 0;*/
}

int test(stack *sta, int j)
{
    int one, ther;

    //如果左邊第三個是符合Match，則計算下一個
    //如果左邊第一個是符合Match，則計算下一個
    if((ther = isref(&sta[j], 3)) && func(&sta[j], &sta[j + ther]))
        return test(sta, j + ther) + 1;   
    else if((one = isref(&sta[j], 1)) && func(&sta[j], &sta[j + one]))
        return test(sta, j + one) + 1;
    
    return 0;
}

int main()
{
    data_s reg;
    
    while(scanf("%s", reg.pa) && reg.pa[0] != '#')
    {
        int i, j;
        int cont = 0;
        stack sta[60] = {};     //建立堆疊

        sta[52].top = -1;       //設定邊界
        
        push(&sta[51], reg);
        for(i = 50; i > -1; i--)    //讀入資料，因為是由右到左，所以反過來存入堆疊
        {
            scanf("%s", reg.pa);
            push(&sta[i], reg);
        }

        for(i = 0; i < 52; i++)     //計算
            for(j = 0; j < 52; j++)
                if(sta[j].top)
                {
                    int s = test(sta, j);
                    if(s > 0)
                        j+=s-1;
                    
                }

        for(i = 0; i < 52; i++)     //測試
            if(sta[i].top)
            {
                data_s r = pop(&sta[i]);
                printf("%s %d\n", r.pa, sta[i].top + 1);
                cont++;
            }
        printf("%d\n", cont);
    }

    return 0;
}
