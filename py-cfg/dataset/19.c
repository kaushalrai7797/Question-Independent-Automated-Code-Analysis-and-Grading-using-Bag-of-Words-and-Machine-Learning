#include<stdio.h>
int main()
{
    int n,t,r,sum=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }

    printf("%d\n",sum);
    sum=0;

    }
    return 0;
}
