#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int t,s,mis,a,i,d,v;
    float sum,tot;
 
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%d",&tot,&mis);
        sum=0;
        sum=(tot*(tot+2))/2;
        for(i=0;i<mis;i++)
        {
            scanf("%d",&a);
            sum-=a;
        }
        scanf("%d",&s);
        v=tot;
        d=(v%2==0)?(tot/2):((tot+1)/2);
 
        sum-=s*(sum/d);
        printf("%.4f\n",sum);
    }
    return 0;
}