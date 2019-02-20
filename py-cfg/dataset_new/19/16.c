#include <stdio.h>
int val(int n,int k)
{
    int c;
    if(n<=k)
    {
        return 1;
    }
    for(int i=1;i<=k;i++)
    {
        c=val(n-i,k);   
    }
    return c;
}
int main()
{
    int n,k,t;
    scanf("%d %d",&n,&k);
    t=val(n,k);
    printf("%d",t%1000000007);
    return 0;
}

