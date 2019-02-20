#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for (i=0;i<t;i++)
    {
        int a,b,c,p,q;
       scanf("%d %d %d",&a,&b,&c);
        if (c%2==0)
        {
            p=a*(c/2);
            q=b*(c/2);


        }
        else
        {
            p=a*pow(2,(c/2)+1);
            q=b*pow(2,c/2);

        }
        if(p>q)
        {
            printf("%d",p/q);

        }
        else
        {
            printf("%d",q/p);

        }
    }




}
