#include <stdio.h>

int main(void)
{
    int N=0,B=0,n=0,i=0;
    scanf("%d",&i);
    for(int k=0;k<i;k++)
    {
    if(N<=B)
        {
            n=0;
        }
    else
        {
            scanf("%d",&N);
            scanf("%d",&B);
            n=(N*N/(4*B));
        }
    printf("%d",n);
    }
    return 0;
}
