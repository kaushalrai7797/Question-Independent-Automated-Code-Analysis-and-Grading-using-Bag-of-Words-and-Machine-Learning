#include<stdio.h>
#include<math.h>



int main()
{
	long  long int t,i,k,n,f;

	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
	   scanf("%lld\t%lld",&n,&k);
	   if(n==k || k==1)
	   {
	     printf("1\n");
	     continue;
	   }
	   else
	   {
	      n--;
	      k--;				//n-1Ck-1.......n+r-1 C r-1(actual)
	      if(k>=n/2)
	      {
		k=n-k;
	      }

	      for(f=1,i=1;i<=k;n--,i++)
	      {
		 f=(f*n)/i;
	      }

	      printf("%lld\n",f);
	   }
	}
	 return 0;
}
