#include <stdio.h>
#include<stdlib.h>

int main(void) {
    int i,t,n,a[n],min,k,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);

        }

        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(j==0&&k==1)
                {
                min=abs(a[j]-a[k]);
                }
                if(min>abs(a[j]-a[k]))
                {
                min=abs(a[j]-a[k]);
                }
            }}
            printf("%d\n",min);
        }



	return 0;
}
