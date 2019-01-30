#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(void) {
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
       long long int n,k,i,tom=0,motu=0,a[100005],max=0,min=0;
       scanf("%lld %lld",&n,&k);
       for(i=0;i<n;i++)
       {
           scanf("%lld",&a[i]);
           if(i%2==0)
           {
               motu=motu+a[i];
           }
           else
           tom=tom+a[i];
       }
       
       if(tom>motu)
       printf("YES\n");
       if(motu>=tom)
       { max=a[0];
       min=a[1];
       for(i=0;i<n;i++)
       {
           if(i%2==0)
           {
               if(max<a[i])
               max=a[i];
           }
           else
           {
               if(min>a[i])
               min=a[i];
           }
       }
       }
       if((tom+abs(max-min))>(motu-abs(max-min)))
       printf("YES\n");
       else
       printf("NO\n");
    }
      
return 0;

}