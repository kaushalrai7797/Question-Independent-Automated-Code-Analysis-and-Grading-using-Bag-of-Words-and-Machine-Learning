#include <stdio.h>

int main(void)
{
    int n,i;
    long long int a,sum=0,total;
    scanf("%d", &n);
    total=(n*(n+1))/2;
    for(i=0;i<n;i++)
    {
        scanf("%lld", &a);
        sum=sum+a;
        if(sum>total)
        {
        printf("NO");
        return 0;
        }
    }

    if(sum==total)
    printf("YES");
    else
    printf("NO");

return 0;
}
