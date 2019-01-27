#include <stdio.h>

int main(void) 
{
int n,t,rev=0,a;
scanf("%d",&t);
while(t--)
{
    scanf("%d",&n);
    rev=0;
    while(n)
    {
        a=n%10;
        rev=(rev*10)+a;
        n=n/10;
    }
    printf("%d\n",rev);
}
}

