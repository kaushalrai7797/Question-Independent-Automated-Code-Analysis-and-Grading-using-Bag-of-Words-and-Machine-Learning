#include<stdio.h>
void sub(long long int *m, long long int *b)
{
    if(*m > *b)
    {
        *m = *m - *b;
    }
    else if(*b > *m)
    {
        *b = *b - *m;
    }
    
}
int main()
{
     long long int t, m,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&m,&b);
        while((m==b)||(m==0)||(b==0))
        {
            sub(&m,&b);
        }
        printf("%d\n",(m+b));
    }
    return(0);
}