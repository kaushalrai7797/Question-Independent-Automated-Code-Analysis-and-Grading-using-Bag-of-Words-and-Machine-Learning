#include <stdio.h>

int main(void)
    {
    int t,fact,i,j;
    scanf("%d",&t);
    int n[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        fact=n[i];
        for(j=n[i]-1;j>=1;j--)
        {
            fact=fact*j;
        }
        printf("%d \n",fact);
    }
    }