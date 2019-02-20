#include<stdio.h>
int main()
{
 int c,t,n,s,k,b;
 float d;
 scanf("%d",&t);
 while(t--)
 {
  scanf("%d%d%d",&n,&k,&s);
  d=(float)n/k;
  c=d;
  if(!((n-k)*6>=k&&(d>7||d<6)))
  printf("-1\n");
  else 
    {
     b=s/d;
     if(s%c!=0)
     b++;
     printf("%d\n",b);
    }
    
 }
}