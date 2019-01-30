#include<stdio.h>
#define sz 100000

int main()
{
	int t,a,b,k,i,j,p,ans;
	int count[sz]={0},ar[sz];
	scanf("%d",&t);
	for(i=0;i<sz;i++){
			ar[i]=i+1; 
		}  
	for(j=2;j<=sz;j++){
		p=j;
		if(ar[j-1]==1) continue;  ///printf("\np is %d %d\n ",p,ar[j-1]);
		for(i=j;i<=sz;i=i+p){
			if((ar[i-1])%p==0){ 
				while((ar[i-1])%p==0)
				{ar[i-1]=(ar[i-1]+1)/p;  }
				count[i-1]++; 
			}
			///printf(" %d",ar[i-1]);
		} 
	} 
	while(t--){
		ans=0;
		scanf("%d%d%d",&a,&b,&k);
		///for(i=0;i<b;i++) printf("\nafter %d %d %d \n",i+1,ar[i],count[i]);
		for(i=a-1;i<b;i++){
			if(count[i]==k)
			ans++;
		}
		printf("%d\n",ans);
	}
}