#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long int s[n],diff=0;
        for(int i=0;i<n;i++)
        {
           scanf("%ld",&s[i]);
        }
         for(int c=0;c<n;c++)
          {
              long int a=0;
              for(int b=c+1;b<n;b++)
              {
                  if(s[c]>s[b])
                  {
                      a=s[c];
                      s[c]=s[b];
                      s[b]=a;
                  }
              }

           }
       diff=s[1]-s[0];
       for(int m=1;m<n-2;m++)
       {
           if(s[m+1]-s[m]<diff)
           diff=s[m+1]-s[m];
       }
       printf("%ld\n",diff);
    }
return 0;

}
