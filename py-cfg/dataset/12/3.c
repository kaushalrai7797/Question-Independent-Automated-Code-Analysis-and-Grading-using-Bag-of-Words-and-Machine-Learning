#include<stdio.h>
int main(){
	int n,m,t,i,a;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++){
			scanf("%d",&a);
		}
		for(i=0;i<m;i++){
			scanf("%d",&a);
		}
		if(n==1 && m==1)
		printf("Bob\n");
		else
		printf("Alice\n");
	}
	return 0;
}