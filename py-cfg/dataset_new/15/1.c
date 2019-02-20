#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k=0,l=0,p=0;
	    scanf("%d",&n);
	    long long int a[n],g[n];
         for(int i=0;i<n;i++)	    
         {
             scanf("%lld",&a[i]);
         }
         for(int j=0;j<n;j++)	    
         {
             scanf("%lld",&g[j]);
         }
          for(int i=0;i<n;i++)	    
         {
             if(a[i]<=g[i] && a[i]<=g[n-1-i])
             k=k+1;
              if(a[i]<=g[i])
             p=p+1;
              if(a[i]<=g[n-1-i])
             l=l+1;
            
         }
         if(k==n)
         printf("both\n");
         else if(p==n)
         printf("front\n");
         else if(l==n)
         printf("back\n");
         else
         printf("none\n");
	}
	return 0;
}

