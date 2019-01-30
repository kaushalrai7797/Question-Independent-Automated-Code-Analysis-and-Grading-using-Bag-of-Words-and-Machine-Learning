#include<stdio.h>

int main()
{
    int a,b,c,flag=1;
    scanf("%d %d",&a,&b);
    c=a-b;
    int n=0;
    int i=0;
    if(c==0)
     printf("0");
     else
     {
    while(c!=0)
    {
        int t=c%10;
        if(c==0||flag==0)
         n=t*pow(10,i)+n;
         else
         {
         flag=0;
         n=t*pow(10,i)+n+1;
         }
         c/=10;
         i++;
    }
    printf("%d",n);
}
         
     }