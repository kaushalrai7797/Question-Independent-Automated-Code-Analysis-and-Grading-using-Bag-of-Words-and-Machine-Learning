#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
int diff(int a[5000],int m)
{
    int d,i,j,k;
    d=INT_MAX;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if((abs)(a[i]-a[j])<d)
            {
                d=(abs)(a[i]-a[j]);
            }
        }
    }
    return d;
}
int main(void) {
	int t,m,i,j,k;
	int a[5000];
	scanf("%d",&t);
	while(t>0)
	{
	    scanf("%d",&m);
	    for(i=0;i<m;i++)
	    {
	        scanf("%d ",&a[i]);
	    }
	    k=diff(a,m);
	    printf("%d\n",k);
	    t--;
	}
	return 0;
}
