#include<stdio.h>
int main()
{
    long int b,n,q,w,max,k;
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%ld %ld",&n,&b);
        q = n/2;
        w = n-q;
        if(b>=n)
        {
            max = 0;
        }
        else if(b>=n/2 && n>b)
        {
            max = n-b;
        }
        else
        {
            while(w>0)
            {
                if(q%b==0)
                {
                    max = w*(q/b);
                    break;
                }
                else if(w%b==0)
                {
                    max = q*(w/b);
                    break;
                }
                q++;
                w--;
            }
        }
        printf("%ld\n",max);
    }
    return 0;
}
