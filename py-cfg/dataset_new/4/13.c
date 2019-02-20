#include<stdio.h>
int main()
{
   int t,a,b,c,d,i,k,j,cnt=0,x=0,y=0;
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {
   	scanf("%d%d%d%d",&a,&b,&c,&d);
   	for(j=c;j<=d;j++)
   	{
   	    y=j;
   	    for(k=a;k<=b;k++)
   	    {
   	       x=k;
   	       if(x<y)
   	       	 {
   	       	    cnt++;
   	       	 }
   	    }
   	}
   	printf("%d\n",cnt);
   }
}