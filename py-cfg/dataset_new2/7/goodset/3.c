#include <stdio.h>

int maxm(int a)
{
    return (a*(a+3))/2;
}

int minm(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 2;
    else if(a%2==0)
        return (a+1+minm(a/2)+minm((a/2)-1));
    else if(a%2 != 0)
        return (a+1+2*minm(a/2));
}

int main(void)
{
int t;
scanf("%d", &t);
while(t-->0)
{
    int n,m,min,max;
    scanf("%d%d", &n,&m);

    min=minm(n);
    max=maxm(n);

    if(m<=max && m>=min)
        printf("0\n");
    else if(m>max)
        printf("%d\n",m-max);
    else if(m<min)
        printf("-1\n");

}
return 0;
}
