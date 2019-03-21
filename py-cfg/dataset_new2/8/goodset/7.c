#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        long int min=99999999999,dif;
        scanf("%d",&n);
        long int *a=(long int *)malloc(sizeof(long int)*n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
            for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                {
                    dif=a[i]-a[j];
                    if(dif<0)
                    dif=dif*(-1);
                    if(dif<min)
                        min=dif;
                }
        printf("%ld\n",min);
    }
}
