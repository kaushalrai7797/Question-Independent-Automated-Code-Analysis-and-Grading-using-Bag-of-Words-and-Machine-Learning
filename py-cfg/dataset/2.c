#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k,prev=0,curr,steps=0,arr[200],i,m;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%d",&arr[i]);
		for(i=0;i<n;i++){
			curr=arr[i];
		if((m=(curr-prev))>k){
			steps+=(((m+k-1)/k)-1);
		}
		prev=curr;
		}
		printf("%d\n",steps);
	}
return 0;
}
