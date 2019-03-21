#include<stdio.h>
#define lli  long long int
int main()
{
	lli n,k,i,r,t,prod;
	//FILE* file = fopen("/home/rohit/Desktop/jio/1.txt", "r");
	fscanf(stdin,"%lld",&t);
	while(t--)
	{
		prod=1;
		fscanf(stdin,"%lld %lld",&n,&r);
		if(n==r)
			printf("1\n");
		else if(n<r)
			printf("0\n");
		else
		{
			if(r>=n/2)
				r=n-r;
			for(i=0;i<r-1;i++)
			{
				prod=prod*(n-1-i);
				prod=prod/(i+1);
			}
			printf("%lld\n",prod);
		}
	}
	return 0;
}
