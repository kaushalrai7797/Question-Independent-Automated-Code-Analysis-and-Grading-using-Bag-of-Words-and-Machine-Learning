







#include<stdio.h>
#define p(d)  printf("%lld\n",d*(d+1)/2)
#define g getchar()
int main()
{
    char c;

   long long int t,n,d;
    scanf("%lld\n",&t);
    while(t--)
    {
        scanf("%lld\n",&n);
        d=0;
        while((c=g)!='\n')
        {
            if(c=='1')
                d++;
        }
        p(d);

    }
    return 0;


}



