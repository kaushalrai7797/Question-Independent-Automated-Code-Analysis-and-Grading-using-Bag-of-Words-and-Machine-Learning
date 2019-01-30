#include <string.h>
#include <stdio.h>
#include <math.h>
#define ul unsigned long
int main()
{int t,s,p,k,a,i,n,s1;
    float val;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&p);
        scanf("%d",&k);
        for(i=0;i<k;i++)
        {
            scanf("%d",&a);
            s+=a;
        }
        scanf("%d",&n);
        s1=(p*(p+1))/2;
        s1=s1-s;
        if(p%2==0)
            p/=2;
        else
            p=p/2+1;
        val=(float)((p-n)*s1)/p;
        printf("%0.4f\n",val);
    }
    return 0;
}
