#include<stdio.h>
int lower(int n)
{
  if(n==1)
   return 2;
  else if(n==0)
   return 0;
  else
   {
     if(n%2==0)
        return(n+1+lower(n/2)+lower((n)/2-1));
     else
         return(n+1+2*lower(((n+1)/2)-1));
   }
}

int main()
 {
    int wire,ul,ll,n,i;
    int t;
   scanf("%d",&t);
   while(t>0)
    {
      scanf("%d%d",&n,&wire);

      ul=(n*(n+3))/2;
      ll=lower(n);
       if(wire>=ll&&wire<=ul)
         printf("0\n");
       else if(wire<ll)
        printf("-1\n");
       else if(wire>ul)
       printf("%d\n",wire-ul);
       t--;

  }
 return 0;
}
