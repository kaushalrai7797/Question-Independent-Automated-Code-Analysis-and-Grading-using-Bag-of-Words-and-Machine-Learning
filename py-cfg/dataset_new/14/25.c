#include<stdio.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
     long int x,y;
      scanf("%ld%ld",&x,&y);
      
      while(x!=y)
      {
         if(x>y)
         x=x-y;
         if(y>x)
         y=y-x;
        
        } 
        printf("%ld\n",x+y);
        }
        return 0;
        }