#include <stdlib.h>
 
int main()
{
     long int h,m,a,c,max;
    int t;
    scanf("%d",&t);
    while(t--)
    {   max = 0;
        scanf("%ld %ld",&h,&m);
        a = h/2;
        c = h-a;
        if(m>=h)
          max=0;
        else if(m>=h/2 && m<h)
        {
            max = h-m;
        }
        else
        {
          while(c>0)
          {
           if(a%m==0)
           {   max = c*(a/m);
               break;
           }
           else if(c%m==0)
           {   max = a*(c/m);
               break;
           }
           a++;
           c--;
           }
        }
         printf("%ld\n",max);
    }
    return 0;
}  