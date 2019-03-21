#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int test(int a[],int n,int k,int i){
	int temp,b=1;
	if(i!=0)
		temp=a[0];
	else{
		temp=a[1];
		b=2;
	}
	for(int j=b;j<n;j++){
		if(j!=i){
			if((abs(a[j]-temp))%(k+1)!=0)
				return 0;
		}
	}
	return 1;
}
int main(){
	int t,n,k,f;
	int a[100];
	scanf("%d",&t);
	while(t--){
		f=0;
		scanf("%d %d",&n,&k);
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		/*if(k==1){
			int i;
			for(i=0;i<n;i++){
				if(a[i]!=0)
				break;
			}
			if(i==n){
				printf("NO\n");
				continue;
			}
		}*/
		if(n<=2){
			printf("YES\n");
			continue;
		}
		for(int i=0;i<n;i++){
			if(test(a,n,k,i)==1){
				printf("YES\n");
				f=1;
				break;
			}
		}
		if(f==0)
			printf("NO\n");
	}
}
