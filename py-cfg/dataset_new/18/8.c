#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n,q,i,j;
        scanf("%d%d",&n,&q);
        int D[n],X[q];
        for(i=0;i<n;i++){
            scanf("%d",&D[i]);
        }
        for(j=0;j<q;j++){
            scanf("%d",&X[j]);
            for(i=0;i<n;i++){
                X[j]/=D[i];
            }
            printf("%d ",X[j]);
        }
    }
    return 0;
}
