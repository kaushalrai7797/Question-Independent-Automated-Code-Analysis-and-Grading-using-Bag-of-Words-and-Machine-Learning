#include<stdio.h>
main()
{
    int n,i,x;
    scanf("%d",&n);
    long int sum=0,c[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&c[i]);
        sum=sum+c[i];
    }
    x=n*(n+1)/2;
    if(sum==x)
        printf("YES\n");
    else
        printf("NO\n");

}
