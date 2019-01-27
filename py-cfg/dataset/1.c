#include<stdio.h>
int main()
{
	int n,q;
	long int m,sum=0;
	scanf("%d",&n);
	while(n--)
	{
	 	scanf("%ld",&m);
	 	sum=0;
	 	while(m>0)
	 	{   q=m%10;
	   		sum=sum*10+q;
	  		m=m/10;
	  	}
	 printf("%ld\n",sum);
	 }
	 return 0;
}
