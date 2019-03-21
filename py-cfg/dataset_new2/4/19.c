#include <stdio.h>
long int fact(int,int);
long int facto(int);
int main()
{
    int t,i;
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=1;i<=t;i++)
    {
        return facto(n);
        return fact(n,k);
    }

    return 0;
}
long int facto(int n)
{
    int c,result;
for(int i=1;i<=n;i++)
{
    result=c*i;
}
    return result;
}
long int fact(int n,int k)
{
    int result;
    result=facto(n)/(facto(k)*facto(n-k));
    return result;
}
