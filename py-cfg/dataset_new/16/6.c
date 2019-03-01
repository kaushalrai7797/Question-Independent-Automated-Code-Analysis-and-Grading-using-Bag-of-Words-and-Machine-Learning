#include <stdio.h>
int factorial(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        printf("%d\n",factorial(num[i]));
    }
    return(0);
}
int factorial(int n)
{
    if(n==1)
    return(1);
    else
    return(n*factorial(n-1));
}
