#include<stdio.h>

int main ( void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int N,k,i;
        scanf("%d %d",&N,&k);
        int arr[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
        }int s=0;
        if(arr[0]>k)
        s = s+((arr[0]-1)/k);
        for(i=0;i<N-1;i++)
        {
            if((arr[i+1]-arr[i])>k)
            {
                s= s+((arr[i+1]-arr[i]-1)/k);
            }
        }
        printf("%d\n",s);
    }
        return 0;
}