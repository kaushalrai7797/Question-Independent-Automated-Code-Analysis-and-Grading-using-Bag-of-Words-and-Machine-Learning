#include <stdio.h>

int main(void) {
    int i,j,k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        int n,a,m;
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&m);
        int s,x,y;
        s=(n-2)*180;
        x=(a*n*(n-1))+((m-1)*2*(s-(a*n)));
        y=n*(n-1);
            for(j=2;j<=y;j++)
            {
                if((x%j==0)&&(y%j==0))
                {
                    x=x/j;
                    y=y/j;
                }
            }
        printf("%d %d",x,y);  
    }
	return 0;
}

