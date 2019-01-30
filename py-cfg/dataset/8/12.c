#include <stdio.h>
int main()
{
    int t,n,i,k,l,m,b[6000],c[6000],sumb,sumc,temp,j;
    scanf("%d",&t);
    while(t--)
    {   l=0;m=0;sumc=0;sumb=0;
        scanf("%d%d",&n,&k);
         for(i=0;i<n;i++)
         {
            if(i%2==0)
            {
                scanf("%d",&b[l++]);
                sumb=sumb+b[l-1];
            }
            else
            {
                scanf("%d",&c[m++]);
                sumc=sumc+c[m-1];
            }
         }
         c[m]=20000;
         if(k==0)
         {
             if(sumc>sumb)
               printf("YES\n");
             else
               printf("NO\n");
            continue;   
         }
          for(i=0;i<l;i++)
          {
              for(j=i+1;j<l;j++)
              {
                  if(c[i]>c[j])
                  {
                      temp=c[i];
                      c[i]=c[j];
                      c[j]=temp;
                  }
                  if(b[i]<b[j])
                  {
                      temp=b[i];
                      b[i]=b[j];
                      b[j]=temp;
                  }
              }
          }
          
          for(i=0;(i<k)&&(i<m)&&(c[i]<b[i]);i++)
          {
              sumb=sumb-b[i]+c[i];
              sumc=sumc-c[i]+b[i];
          }
          if(sumc>sumb)
          {
              printf("YES\n");
          }
          else
           printf("NO\n");
    }
    return 0;
}