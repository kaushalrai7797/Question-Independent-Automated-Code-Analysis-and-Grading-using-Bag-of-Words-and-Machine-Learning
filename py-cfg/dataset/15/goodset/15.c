#include<stdio.h>
#include<math.h>
int x[105],a[105],b[105];
double val[105];
double binarysearch(int x[],int a[],int b[],double lo,double hi,int n)
{
  double mid=(lo+hi)/2;
  int i;
  for(i=0;i<n;i++)
    {
      if(x[i]==0)
	val[i]=mid;
      else if(x[i]==1)
	{
	  val[i]=1-(1-val[a[i]-1])*(1-val[b[i]-1]);
	}
      else
	{
	  val[i]=val[a[i]-1]*val[b[i]-1];
	}
    }
  //printf("%lf %lf\n",mid,val[n-1]);
  if(fabs(val[n-1]-0.5)<0.0000001)
    return mid;
  else if(val[n-1]>0.5)
    return binarysearch(x,a,b,lo,mid,n);
  else
    return binarysearch(x,a,b,mid,hi,n);
}
int main()
{
  int t,n,i;
  scanf("%d",&t);
  double ans;
  while(t--)
    {
      scanf("%d",&n);
      for(i=0;i<n;i++)
	{
	  scanf("%d",&x[i]);
	  if(x[i])
	    {
	      scanf("%d %d",&a[i],&b[i]);
	    }
	}
      printf("%.5lf\n",binarysearch(x,a,b,0.0,1.0,n));
    }
  return 0;
}
 