// ConnectingSoldires.cpp : Defines the entry point for the console application.
//

#include<stdio.h>
#include<math.h>

int bin(int len){
	if (len == 1)
		return 0;
	return len + bin(len / 2) + bin(ceil((double)(len / 2)));
	//return len;


}
int main(){
	int i, j,n,m,p;
	scanf("%d", &p);
	while (p--){
		scanf("%d %d", &n, &m);
		int len,max,ans;
		len = 0;
		len=bin(n+1);
		max = ((n + 1)*(n + 2)) / 2 - 1;
		//printf("max=%d min=%d",max,len);
		if (m >= max)
			ans = m - max;
		else if (m >= len && m < max)
			ans = 0;
		else if (m < len)
			ans = -1;
		printf("%d\n",ans);
	}
	return 0;
}
