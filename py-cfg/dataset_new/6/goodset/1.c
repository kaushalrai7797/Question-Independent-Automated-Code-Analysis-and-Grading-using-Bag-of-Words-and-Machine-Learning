#include<stdio.h>
long long int gcd(long long int x,long long int y){
	if(x==0){
		return y;
	}
	return gcd(y%x,x);
}
int main(){
	int t,n,k;
	long long int a,y,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d %lld %d\n",&n,&a,&k);
        if(n>=3 && k<=n){
            x=(360*(n-2)-2*a*n)*(k-1)+a*n*(n-1);
        y=n*(n-1);
        printf("%lld %lld\n",x/gcd(x,y),y/gcd(x,y));
		}
	}
	return 0;
}
                				