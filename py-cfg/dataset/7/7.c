#include <stdio.h>

int main()
{

    int t;
    long long int n;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%lld",&n);
        long long int sum=0,d;
        
        while(n>0)
        {
            d=n%10;
            n=n/10;
            
            sum+=d;
            
        }
        
        if(sum%9>=5)
        printf("%lld\n",(9-sum%9));
        else
        printf("%lld\n",(sum%9));
        
        
    }
    
    return 0;
}