#include <stdio.h>

int main(void)
{
    int N,B,n,i;
    scanf("%d",&i);
    for(int k=0;k<i;k++)
    {
    scanf("%d",&N);
    scanf("%d",&B);
    n=(N*N/(4*B));
    
    printf("%d",n);
    }
    return 0;
}
