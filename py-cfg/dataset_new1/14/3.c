#include<stdio.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++)
    {
        int m,b;
        scanf("%d %d",&m,&b);
        if(m==b){}
        else if(m==0||b==0){}
        else if(m%b==0)
         {
             m=0;
             b=2*b;
         }
        else if(b%m==0)
        {
            b=0;
            m=2*m;
        }
        else
        {
            if(b>m)
            {
              long long int z;
              z=b%m;
              if(b%z==0)
              {
                  b=2*z;
                  m=0;
              }
              else
              {
                  b=2;
                  m=0;
              }
            }
            else
            {
                long long int z;
                z=m%b;
                if(m%z==0)
                {
                    m=2*z;
                    b=0;
                }
                else
                {
                    m=2;b=0;
                }
            }
        }
        printf("%lld\n",(long long int)(m+b));
    }
}