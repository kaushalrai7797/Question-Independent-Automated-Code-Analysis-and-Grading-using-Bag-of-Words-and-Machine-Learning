#include<stdio.h>
#include<math.h>
int main()
{
    int t,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,j=0,r=0,s=0;
        scanf("%d%d",&n,&m);
        long long int a[n],b[n],suma=0,sumb=0;
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);
        }
        for(j=0;j<m;j++)
        {
            scanf("%lld",&b[j]);
        }
        for(j=0;j<n;j++)
        {
            printf("%lld",a[j]);
        }
        for(j=0;j<m;j++)
        {
            printf("%lld",b[j]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]>0)
            {
                r++;
            }
            suma=suma+a[j];
        }
        for(j=0;j<m;j++)
        {
            if(b[j]>0)
            {
                s++;
            }
           sumb=sumb+b[j];
        }
        if(suma==sumb && r==s)
        {
            printf("Bob\n");
        }
        else
        {
            printf("Alice\n");
        }
    }
   return 0;
}
