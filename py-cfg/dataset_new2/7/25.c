#include<stdio.h>
int min[31],max[31];
int main()
{
    int t;

    min[1]=max[1]=2;
    int i,n,m;
    for(i=2;i<31;i++)
    {
        min[i]=i+1+min[i/2];
        max[i]=i+1+min[i/2]+min[i-i/2-1];
    }
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n, &m);
    if(m<min[n])
    {
        printf("-1\n");
    }
    else if(m<=max[n])
    {
       printf("0\n");
    }
    else
     printf("%d\n",m-max[n]);
}
return 0;
}
