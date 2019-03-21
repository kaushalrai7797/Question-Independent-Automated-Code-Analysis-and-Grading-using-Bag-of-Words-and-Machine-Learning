#include <stdio.h>
int main()
{
    long long N,x,c,y=0;
    scanf("%ld",&N);
    x=0;
    y=N*(N+1)/2;
    while(N!=0)
    {
        scanf("%ld",&c);
        x+=c;
        N--;
    }
    if(x==y)
    printf("YES");
    else
    printf("NO");
}
