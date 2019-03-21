#include<stdio.h>

int main()
{

    int tst,n,a[1000],k,i,c,x[1000],rem;
    scanf("%d",&tst);

    c=0;

    while(tst--)
    {

        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++) scanf("%d",a+i);
        rem=0;
        k++;

        for(i=1;i<n;i++)
          {
             if((a[i]-a[0])%k==0)
              rem++;
           }

     if(rem>=(n-2))

            {x[c++]=1;continue;}

    rem=0;

    for(i=0;i<n;i++)
     {

         if(i!=1)
           if((a[i]-a[1])%k==0)
            rem++;

    }

    if(rem>=(n-2))
        {x[c++]=1;continue;}

    x[c++]=0;

    }

    for(i=0;i<c;i++){

         if(x[i])printf("YES\n");

         else printf("NO\n");}

    return 0;

}
