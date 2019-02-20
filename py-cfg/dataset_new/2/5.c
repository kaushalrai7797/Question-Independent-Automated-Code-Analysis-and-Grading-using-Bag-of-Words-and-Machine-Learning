#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int c=0;
        long long int n,m;
        scanf("%lld%lld",&n,&m);
        long long int a[n],b[m];
        for(long long int i=0;i<n;i++) {
            scanf("%lld",&a[i]);
        }
        for(long long int i=0;i<m;i++){
            scanf("%lld",&b[i]);
        }
        for(long long int i=0;i<n;i++){
            for(long long int j=0;j<m;j++){
                if(a[i]==b[j]){
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
}