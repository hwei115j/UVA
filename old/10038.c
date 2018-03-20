#include<stdio.h>

int main()
{
	int i,i2;
	int a,b,f;
	int n,new,new2;
	int fuck;
	
	while(scanf("%d",&i) != EOF)
	{
		i2 = i;
		n = f = new = new2 = fuck = 0;
		scanf("%d",&a);
		while(--i > 0)
		{
			scanf("%d",&b);
			if((a -= b) < 0)
				a = -a;
			if(f-a != 1)
				n++;
			new += f;
			if(f >= i2)
				fuck++;	
			f = a;
			a = b;
		}
		n--;
		new += f;
		for(i=1;i < i2;i++)
			new2 += i;
	//	printf("%d\n",new != new2);
//		printf((n == 0 || new == new2 || i2 == 1)?"Jolly\n":"Not jolly\n");
		if(fuck != 0)
			printf("Not jolly\n");
		else if(new == new2 || i2 ==1)
			printf("Jolly\n");
		else if(n == 0)
			printf("Not jolly\n");
		else
			printf("Not jolly\n");
			
	}
	return 0;
	
}
