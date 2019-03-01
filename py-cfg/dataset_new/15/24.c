#include<stdio.h>
int main(){
	int t;
	long n,i;
	scanf("%d",&t);
	while(t>0){
		scanf("%ld",&n);
		long f[n],g[n],fcount=0,bcount=0;
		for(i=1;i<=n;i++){
			scanf("%ld",&f[i]);
		}
		for(i=1;i<=n;i++){
			scanf("%ld",&g[i]);
		}
		for(i=1;i<=n;i++){
			if(g[i]<f[i]){
				break;
			}
			fcount++;
		}
		for(i=n;i>=1;i--){
			if(g[i]<f[n-i+1]){
				break;
			}
			bcount++;
		}
		if(fcount==n && bcount!=n){
			printf("\nfront\n");
		}
		if(fcount!=n && bcount==n){
			printf("\nback\n");
		}
		if(fcount==n && bcount==n){
			printf("\nboth\n");
		}
		if(fcount!=n && bcount!=n){
			printf("\nnone\n");
		}
		t--;
	}
	return 0;
}