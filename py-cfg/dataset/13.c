#include<stdio.h>
int main(){
    int t,N,K;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&N,&K);
        int h[N+1],count=0,i;
        for(i=1;i<N+1;i++)
        scanf("%d",&h[i]);
        h[0]=0;
        for(i=0;i<N;i++){
        if(h[i+1]-h[i]>K){
            if((h[i+1]-h[i])%K!=0)
            count=count+(h[i+1]-h[i])/K;
            else
            count=count+(h[i+1]-h[i])/K-1;
        }
        }
        printf("%d\n",count);
    }
}