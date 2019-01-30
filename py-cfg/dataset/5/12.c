#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c,d,i,a1,b1,rem,e;
    scanf("%d",&t);
    while(t--)
    {
        e=0;
    scanf("%d %d",&a,&b);
        a1=sqrt(a);
        b1=sqrt(b);
        for(i=a1;i<=b1;i++)
        {d=1;
            c=i*i;
            while(c!=0)
            {
                rem=c%10;
            if(rem!=0 && rem!=1 && rem!=4 && rem!=9)
            {
                d=0;break;
            }
            c=c/10;
            }
            if(d==1)
                {e++;}
        }



      printf("%d\n",e);
      }
    }

