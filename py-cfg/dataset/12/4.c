#include<stdio.h>
int main(){
	int n,m,t,a,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++){
			scanf("%d",&a);
		}
		for(i=0;i<m;i++){
			scanf("%d",&a);
		}
		if(n==m)
		printf("Bob\n");
		else
		printf("Alice\n");
	}
	return 0;
}