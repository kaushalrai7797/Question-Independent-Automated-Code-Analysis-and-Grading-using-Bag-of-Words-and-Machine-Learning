#include <stdio.h>

int main(void)
{
    int N,s=0,x,count;
    scanf("%d",&N);
    count = N;
    while(count--)
    {
        scanf("%d",&x);
        s+=x;
    }
    if(2*s == N*(N+1))
        printf("YES");
    else
        printf("NO");
	return 0;
}
