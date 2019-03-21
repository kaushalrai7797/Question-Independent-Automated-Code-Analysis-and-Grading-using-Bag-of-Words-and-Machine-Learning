#include <stdio.h>

int main()
{
	int mini,temp,t,n,m,i,j,max[31],min[31];
	scanf("%d",&t);
	min[0] = max[0] = 0;
	min[1] = max[1] = 2;
	min[2] = max[2] = 5;
	for(i=3;i<31;i++) {
		mini = 200000000;
		for(j=1;j<=i;j++) {
			temp = min[j-1] + min[i-j] + i + 1;
			if(mini > temp) mini = temp;
		}
		min[i] = mini;
		max[i] = max[i-1] + i + 1;
		//printf("%d ",min[i]);
	}

	while(t--) {
		scanf("%d%d",&n,&m);
		if(m<min[n]) printf("%d\n",-1);
		else if(m>=min[n] && m <=max[n]) printf("%d\n",0);
		else printf("%d\n",m-max[n]);
	}
	return 0;
} 
