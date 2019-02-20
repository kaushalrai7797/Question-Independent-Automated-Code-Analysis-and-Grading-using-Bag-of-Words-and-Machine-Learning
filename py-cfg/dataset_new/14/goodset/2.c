#include<stdio.h>
int ans(int b,int m);
int main()
{
	int t,z;
	scanf("%d",&t);
	for(z=0;z<t;z++)
	{
	int m,b;
	scanf("%d %d",&m,&b);
	printf("%d\n",ans(b,m));
    }
	return 0;
}
int ans(int b,int m)
{
	if(m==b)
	  return 2*m;
	if(m==0||b==0)
	  return m+b;
	if(b%m==0)
	  return 2*m;
	if(m%b==0)
	  return 2*b;    
	  if(b>m)
	  {
	    if(m%(b%m)==0)
	      return 2*(b%m);
	    else
	      return ans(m,(b%m));
      }
      else
      {
      	if(b%(m%b)==0)
      	  return 2*(m%b);
      	else
		  return ans(b,(m%b));  
	  }
      
}