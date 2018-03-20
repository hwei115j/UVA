#include<stdio.h>

int main()
{
	int n,i;
	int a,b;
	int diff,add,add1;
	int count,count1;
	int pa;

	while(scanf("%d",&n) != EOF)
	{
		diff = count = count1 = add = add1 = pa = 0;
		if(n <= 0)
			goto fuck;
		scanf("%d",&a); 
		for(i = 1;i < n;i++)
		{
			scanf("%d",&b);
			if((a -=b) <0)
				a = -a;
			if(diff-a != 1)
				count++;
			add += diff;
			if(a >= n)
				count1++;
			if(a == 0)
				pa++;
			diff = a;
			a = b;
		}
		count--;
		add += diff;
		for(i = 1;i < n;i++)
			add1 += i;
	
		if(n == 1)
			printf("Jolly\n");
		else if(count1 != 0 || pa !=0)
			printf("Not jolly\n");
		else if(add == add1)
			printf("Jolly\n");
		else if(count == 0)
			printf("Not jolly\n");
		else
		{	
			fuck:
			printf("Not jolly\n");
		}
	}	
}
