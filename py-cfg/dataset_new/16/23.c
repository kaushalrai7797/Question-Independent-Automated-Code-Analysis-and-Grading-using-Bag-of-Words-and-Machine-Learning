#include<stdio.h>
int main()
{
    int i,j,a,b,fact=1;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        for(j=0;j<b;j++)
        {
            fact=fact*(b-i);
        }
        printf("\n%d",fact);
        fact=NULL;
        b=NULL;
    }
}