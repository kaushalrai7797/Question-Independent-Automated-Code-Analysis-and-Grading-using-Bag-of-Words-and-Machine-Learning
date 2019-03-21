#include <stdio.h>
int main()
{
    long long n,k=0,min,i,j,la;
    long long s[100000],final[100000];

    scanf("%lld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%lld",&s[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            la=s[i]-s[j];
            la=abs(la);
            final[k]=la;
            k++;
        }
    }

    min=final[0];
    for(i=1;i<n;i++)
    {
        if(min>final[i])
            min=final[i];
    }

    printf("%lld\n",min);

    return 0;
}
