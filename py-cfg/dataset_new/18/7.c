#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q,i,j,x;
        scanf("%d%d",&n,&q);
        int D[n];
        for(i=0;i<n;i++){
            scanf("%d",&D[i]);
        }
        for(j=0;j<q;j++){
            scanf("%d",&x);
            for(i=0;i<n;i++){
                x/=D[i];
            }
            printf("%d ",x);
        }
    }
    return 0;
}
