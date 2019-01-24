#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,i,c=0;
        scanf("%lld%lld",&n,&k);
        long long int a[n];
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        if(a[0]>k)
        {
        if(a[0]%k==0)
        c=c+a[0]/k-1;
        else
        c=c+a[0]/k;
        
        }
        for(i=0;i<n-1;i++)
        {
            if((a[i+1]-a[i])>k)
              {
                  if((a[i+1]-a[i])%k==0)
                  c=c+(a[i+1]-a[i])/k-1;
                  else
                   c=c+(a[i+1]-a[i])/k;
                  
              }            
            
        }
        
       printf("%lld\n",c); 
    }
    
    
}