#include <stdio.h>

int main(int argc, char *argv[])
{
	int i[1000],a;
	int z,n,x=0,b=0;
	int an[168]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997};



    while(scanf("%d",&a)!=EOF) 
	{
/*		for(n=0;n<1000;n++)			//產生1000以下質數
		{
			for(z=n;z>0;z--)
				if(n%z==0)
					x++;
			if(x==2)
				i[n]=0;
			else
				i[n]=-1;
			x=0;				
		}	
*/
		for(n=0;n<1000;n++)
			i[n]=-1;
		for(n=0;n<168;n++)
			i[an[n]]=0;
		for(n=0;n<1000;n++)			
			if(i[n]==0)
				while(a%n==0)
				{	
					a/=n;
					i[n]++;
				}
		for(n=999;n>0;n--)
			if(i[n]>0)
			{
				b=n;
				break;
			}
		for(n=0;n<1000;n++)
			if(i[n]>0)			//顯示
			{
				if(i[n]>1)
					printf("%d^%d",n,i[n]);
				else 
					printf("%d",n);
				if(n==b)
				{
					b=0;
					break;
				}
				printf(" * ");
			}
		if(a!=1)
			printf(" * %d\n",a);	
		else
			printf("\n");

// 		for(n=0;n<100;n++)
//			printf("%d\n",i[n]); 
	}
    return 0;
}

