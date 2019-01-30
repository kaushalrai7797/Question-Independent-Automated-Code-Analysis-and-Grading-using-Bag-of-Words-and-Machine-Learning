#include<stdio.h>
int main(){
	int n,m,t,i;
	scanf("%d",&t);
	while(t--){
		int sum=0,sum1=0;
		scanf("%d%d",&n,&m);
		int a[n],b[m];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		for(i=0;i<m;i++){
			scanf("%d",&b[i]);
			sum1=sum1+b[i];
		}
		if(sum1=sum)
		printf("Bob\n");
		else
		printf("Alice\n");
	}
	return 0;
}