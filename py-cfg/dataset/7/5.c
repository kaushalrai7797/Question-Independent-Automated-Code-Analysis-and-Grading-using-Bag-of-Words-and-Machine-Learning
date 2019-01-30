#include <stdio.h>


long long int digit(long long int a)
{
    
    long long int d=0;
    
    while(a>0)
    {
        a=a/10;
        d++;
    }
   
    return d;
}


int main()
{

    int t;
    long long int n;
    
    scanf("%d",&t);
    
    while(t--)
    {
        scanf("%lld",&n);
        long long int sum=0,d;
        
        long long int a=digit(n);
        
      
        long long int x=n;
        
        while(n>0)
        {
            d=n%10;
            n=n/10;
            
            sum+=d;
            
        }
      
      long long int b=x-(sum%9);
   
   
        if(x<=9)
        {
            if(x%9>=5)
            printf("%lld\n",9-(x%9));
            else
             printf("%lld\n",(x%9));
        }
   
        else if(a==digit(b)) 
        {
            if(sum%9>=5)
            printf("%lld\n",9-(sum%9));
            else
            printf("%lld\n",(sum%9));
        
        
        }
        else{
            
        
        printf("%lld\n",(9-sum%9));
        }
        
    }
    
    return 0;
}