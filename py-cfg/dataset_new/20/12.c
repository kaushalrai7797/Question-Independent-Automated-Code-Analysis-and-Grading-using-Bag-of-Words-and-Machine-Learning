#include <stdio.h>
int main()
{
    int t,l,r,i,b,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {

    scanf("%d %d",&l,&r);
    b=l;
    for(i=l+1;i<=r;i++)
    {
        b=b^i;
    }
    if(b%2==0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
    }
}
