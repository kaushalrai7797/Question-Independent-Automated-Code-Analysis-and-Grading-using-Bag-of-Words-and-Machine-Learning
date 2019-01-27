#include<stdio.h>
int main()
{
    int n,r,t;
    scanf("%d",&t);
    while(t--)
    {scanf("%d",&n); int d=0;
    while(n)
    {
       
    r=n%10;
    d=d*10+r;
    n=n/10;
    }
    printf("%d",d);
    printf("\n");
    }
    
}