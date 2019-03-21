#include<stdio.h>
int main(){
    long long int n,i,s=0,a=0,t;
    scanf("%lld",&n);
    for(i=1;i<=n;i++){
        scanf("%lld",&t);
        s=s+i;
        a=a+t;
    }
    if(s==a)
        printf("YES");
    else
        printf("NO");

return 0;
}
