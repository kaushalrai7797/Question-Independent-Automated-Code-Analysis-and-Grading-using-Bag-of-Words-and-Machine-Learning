#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c,i,ii,d,rem;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
      scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++)
      {d=1;
          if((sqrt(i)-floor(sqrt(i)))==0)
            {
                ii=i;
                while(ii!=0)
                {
                    rem=ii%10;
                    if(rem!=0 && rem!=1 && rem!=4 && rem!=9)
                    {d=0;break;}
                    ii=ii/10;
                }
                if(d==1)
                    {c++;}
            }
      }
      printf("%d\n",c);
      }
    }

