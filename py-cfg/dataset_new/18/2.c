#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q,i,j,D;
        scanf("%d%d",&n,&q);
        float k=1,x;
        for(i=0;i<n;i++){
            scanf("%d",&D);
            k/=D;
        }
        for(j=0;j<q;j++){
            scanf("%f",&x);
            x*=k;
            int n=x;
            printf("%d ",n);
        }
        printf("\n");
    }
    return 0;
}
