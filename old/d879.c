#include<stdio.h>
#include<math.h>

double distance(double,double);
int main()
{
	int i,n,a;
	int j = 1;
	int xy;
	char c;
	double root,add,r;
	struct coordinate_s
	{
		int x;
		int y;
	}coordinate[16];
	
	scanf("%d",&n);
	while(n != 0)
	{
		add = 0;
		for(i = 0;i < 2*n;i++)
		{	
			while((c = getchar()) != ' ')
				;
			scanf("%d %d",&coordinate[i].x,&coordinate[i].y);
		}
/*		for(i = 0;i < 2*n;i++)
			printf("x = %d y = %d\n",coordinate[i].x,coordinate[i].y);*/
		for(i = 0;i < 2*n;i++)
		{
			root = 10000;
			for(a = i+1;a < 2*n;a++)
				if(coordinate[i].x != -1 && coordinate[a].x != -1)
				{
					r = distance(coordinate[i].x - coordinate[a].x\
					,coordinate[i].y - coordinate[a].y);
		//			printf("r = %f ",r);
					if(root > r)
					{
						root = r;
						xy = a;
					}
		//			printf("root = %f\n",root);
				}
			if(root != 10000){
				add+=root;
			printf("i = %d a = %d\n",i,xy);
			printf("xi = %d yi = %d\n",coordinate[i].x,coordinate[i].y);
			printf("xa = %d ya = %d\n",coordinate[xy].x,coordinate[xy].y);
			printf("add = %f\n",add);
			}
			coordinate[i].x = -1;
			coordinate[xy].x = -1;
		}
		printf("Case %d: %.2f\n",j,add);
		j++;
		scanf("%d",&n);
	}
	
}
double distance(double x,double y)
{
	if(x < 0)
		x = -x;
	if(y < 0)
		y = -y;
	return sqrt(pow(x,2)+pow(y,2));	
}
