#include <stdio.h>
typedef long long unsigned int big;
int main(){
	big n,k,j=0,i=1;
	scanf("%llu %llu",&n,&k);
	if(n<=k){
		printf("1");
	}
	else{
		big a[n-k];
		a[0]=k;
		for(i=1;i<(n-k);i++){
			if(i<=k){
				a[i]=(2*a[i-1]-1)%1000000007;
			}
			else{
				a[i]=(2*a[i-1]-a[j])%1000000007;
				j++;
			}
		}
		printf("%llu",a[i-1]%1000000007);
	}
	return 0;
}

