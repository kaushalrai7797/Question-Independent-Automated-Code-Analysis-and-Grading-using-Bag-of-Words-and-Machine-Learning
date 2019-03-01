#include<stdio.h>
main()
{
    int t,n,k,s,od,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&s);
        od=s-(s/7);
        if((n*od)>=(k*s))
        {
            l=((k*s)/n)+(((k*s)%n)!=0);
            printf("%d\n",l);
        }

        else
            printf("-1\n");
    }
}
