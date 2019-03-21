#include<stdio.h>
int main()
{
    int t, n, i, j,r,s,q, b,c,a[1000];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        r=s=0;
        scanf("%d %d", &n, &q);
        q++;
        for(j=0; j<n; j++)
        {
            scanf("%d", &a[j]);
            a[j]%=q;
        }
        b=a[0];
        c=a[1];
        for(j=0; j<n;j++)
        {
            if(a[j]==b)
                r++;
            if(a[j]==c)
                s++;
        }
        if(r==(n-1)||s==(n-1)||r==n||n==2)
            printf("YES \n");
        else
            printf("NO \n");
    }
}
