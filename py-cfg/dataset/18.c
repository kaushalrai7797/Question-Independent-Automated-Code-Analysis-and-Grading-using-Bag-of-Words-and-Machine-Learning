#include<stdio.h>
int main()
{
    int t,i,n,k,d;
    scanf("%d",&t);

    while(t--)
    {
       int count=0;
        scanf("%d %d",&n,&k);
        int h[n+1];
        h[0]=0;
        for(i=1;i<n+1;++i)
            scanf("%d",&h[i]);


        for(i=0;i<n;++i)
        {
            if(h[i+1]-h[i]>k)
                {
                    d=(h[i+1]-h[i]-1)/k;
                    count+=d;


                 }
        }


            printf("%d\n",count);
    }




}
