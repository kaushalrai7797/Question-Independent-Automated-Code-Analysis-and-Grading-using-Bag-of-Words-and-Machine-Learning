
#include <stdio.h>
int main()
{
    int rev=0,d,n,i;
    scanf("%d",&i);
    while(i!=0)
    {
    rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
         d=n%10;
         rev=rev*10+d;
         n=n/10;
    }
    i--;
    printf("%d\n",rev);
    }
   return(0);
}