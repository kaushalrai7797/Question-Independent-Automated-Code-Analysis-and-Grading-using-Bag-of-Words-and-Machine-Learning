#include<stdio.h>
int main()
{
    int t,n,i,j,a,horse[1000],diff,min_diff;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&horse[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
                {
                    if(horse[i]>horse[j])
                    {
                        a=horse[i];
                        horse[i]=horse[j];
                        horse[j]=a;
                    }
                }
        }
        min_diff=horse[n-1]-horse[n-2];
        for(i=n-1,j=n-2; i>=0,j>=0; i--,j--)
        {
        	diff=horse[i]-horse[j];
                if(min_diff<diff)
                {
                    min_diff=diff;
                }
        }
        printf("%d\n",min_diff);
    }
}
