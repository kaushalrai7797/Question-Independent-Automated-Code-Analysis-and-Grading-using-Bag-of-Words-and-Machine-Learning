#include<stdio.h>
void main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int s,i,e,x=0;
        scanf("%d%d",&s,&e);
        if (e!=s)
        {
            for(i=s;i<e+1;i++)
            {
            x=x^i;
            }
        }
        else
            x=s;
        if(x%2==0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
}