#include<stdio.h>
main()
{
	int i,j,k,n,s,t,p,y;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		p=0;
		y=0;
		scanf("%d%d%d",&n,&k,&s);
	   for(j=1;j<=s;j++)
	   {
	   	      n=n-k;
	   	       p++;
	   	    if(n<0 && j%7==0)
	   	  {
			 printf("-1\n");
			 y++;
			 break;
		  }
	   	  if(n<0 && j>=7)
	   	  break;
	   }
	   if(y==0)
	  {
	   s=s-(p-1);
	   printf("%d\n",s);
      }
	}
}