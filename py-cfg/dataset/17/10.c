    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int t,tr,mis,a,i,d,v;
        float sum,to;
     
        scanf("%d",&t);
        while(t--)
        {
            scanf("%f%d",&to,&mis);
            sum=0;
            sum=(to*(to+1))/2;
            for(i=0;i<mis;i++)
            {
                scanf("%d",&a);
                sum-=a;
            }
            scanf("%d",&tr);
            v=to;
            d=(v%2==0)?(to/2):((to+1)/2);
     
            sum-=tr*(sum/d);
            printf("%.4f\n",sum);
        }
        return 0;
    }
     