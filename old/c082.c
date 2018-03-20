#include<stdio.h>
#define MAX 101

typedef struct robot Robot
typedef (*Move)(Robot *)

struct robot
{
	int x, y;
	int now;
	char com[MAX];
	Move mobile;
	Robot *next;
} 
void new(Robot **poi)
{
	*poi = (Robot *)mollc(sizeof(Robot)); 
	*(poi)->mobile = 
}
void method(Robot *obj)
{
	
}

int main()
{
	int a, b;
	char n, c;

	Robot *ro = NULL;
	new(&ro);
	while(scanf("%d%d%c",ro->x, ro->y, n) != EOF)
	{
		ro->now = n - 'N';
		scanf("%d", ro->com)
		ro->mobile;	
	}

}
