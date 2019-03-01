#include<stdio.h>
int main()
{
    int t,z;
    scanf("%d",&t);
    for(z=0;z<t;z++)
    {
        int m,b;
        scanf("%d %d",&m,&b);
        while(!(m==b||m==0||b==0))
        {
            if(b<m)
            {
                if(m%b==0)
                {
                    m=0;
                    b=2*b;
                }
                else
                     m=m-b;
            }
            else
            {
                if(b%m==0)
                {
                  b=0;
                  m=2*m;
                }
                else
                  b=b-m;
            }
        }
        printf("%lld\n",(long long int)(m+b));
    }
}