#include <stdio.h>

int main(void) {
	 int t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++)
    {
    int i,n,a[10000]={0},cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=a[i+1])
        {
            cnt++;
        }
        else
        {
            continue;
        }
    }
    cnt=cnt+n;
    printf("%d\n",cnt);
    }
	return 0;
}

