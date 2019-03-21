#include<stdio.h>
int main(void)
{
   long i,size,person[100000],sum=0;
   scanf("%ld",&size);
   for(i=0;i<size;i++)
   {
       scanf("%ld",&person[i]);
       sum=sum+person[i];
   }
   for(i=size;i>0;i--)
        sum=sum-i;
   if(sum==0)
        printf("YES\n");
    else
        printf("NO\n");
}
