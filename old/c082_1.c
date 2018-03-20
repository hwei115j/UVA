#include<stdio.h>
#include<stdlib.h>

#define MAX 101
#define F(x) ((x) >= 0)?(x):(x)+4
#define _AS(x, y) if((x) == 'N') (y) = 0;\
				else if((x) == 'E') (y) = 1;\
				else if((x) == 'S') (y) = 2;\
				else (y) = 3;
#define _DAS(x, y) if(x == 0) y = 'N';\
				else if(x == 1) y = 'E';\
				else if(x == 2) y = 'S';\
				else y = 'W';
int a, b;

int x[MAX] = {0};
int y[MAX] = {0};
int sp = 0;

typedef struct robot Robot; 
typedef void (*func_t)(Robot *);

struct robot
{
	int x, y; //目前位置
	int now; //目前方向 N:0 E:1 S:2 W:3 die:-1
	int die; //0 為生 1 為死 2為停止
	char com[MAX];
	func_t move; //移動方法
};

void move_impl(Robot *obj)
{
	int i;
	char c;

	for(i = 0;!obj->die && (c = obj->com[i]) != '\0'; i++)
	{
		if(c == 'L')
			obj->now--;
		else if(c == 'R')
			obj->now++;
		else
		{
			obj->now%=4;
			obj->now = F(obj->now); //取得正確方向
			switch(obj->now)
			{
				case 0:
					obj->y++;
					break;
				case 1:
					obj->x++;
					break;
				case 2:
					obj->y--;
					break;
				case 3:
					obj->x--;
					break;
			}
			int j;
	
			for(j = 0; j < sp; j++)
				if(obj->x == x[sp] && obj->y == y[sp])
					obj->die = 2;
			
			if(obj->x >= a || obj->x < 0)		//x超出範圍
			{
				(obj->x > 0)?obj->x--:obj->x++;
				obj->die = 1;
				x[sp] = obj->x;
				y[sp] = obj->y;
				sp++;
			}
			else if(obj->y >= b || obj->y < 0)		//y超出範圍
			{
				(obj->y > 0)?obj->y--:obj->y++;
				obj->die = 1;
				x[sp] = obj->x;
				y[sp] = obj->y;
				sp++;
			}	
		}			
	}
	if(obj->now < 0 && obj->now > 3)
	{
		obj->now%=4;
		obj->now = F(obj->now);
	}
	
}
void init_robot(Robot **poi)
{
	*poi = malloc(sizeof(Robot)); //初始化
	(*poi)->move = move_impl;
	(*poi)->die = 0;
}

int main()
{
	Robot *r = NULL;
	char c;

	init_robot(&r); //初始化物件
	scanf("%d %d",&a ,&b);
	while(scanf("%d %d %c",&r->x, &r->y ,&c) != EOF)
	{
		_AS(c, r->now);
		scanf("%s", r->com);
		r->move(r);

		printf("x = %d y = %d ", r->x, r->y);
		_DAS(r->now, c);
		printf((r->die == 0)?"%c\n":(r->die == 1)?"%c LOST\n":"%c\n", c);

		r->die = 0;
	}
}
