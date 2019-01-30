    #include <stdio.h>
    #include <stdlib.h>
     
    int main()
    {
        int t,tore,missing,a,i,d,v;
        float sum,total;
     
        scanf("%d",&t);
        while(t--)
        {
            scanf("%f%d",&total,&missing);
            sum=0;
            sum=(total*(total+1))/2;
            for(i=0;i<missing;i++)
            {
                scanf("%d",&a);
                sum-=a;
            }
            scanf("%d",&tore);
            v=total;
            d=(v%2==0)?(total/2):((total+1)/2);
     
            sum-=tore*(sum/d);
            printf("%.4f\n",sum);
        }
        return 0;
    }
     