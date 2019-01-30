#include <stdio.h>

int main(void) {
	int a,b,c,d=0,arr[10];
	scanf("%d %d",&a,&b);
	c=a-b;
	while(c!=0)
	{
	    arr[d]=c%10;
	    c=c/10;
	    d++;
	}
	if(arr[0]==1)
	arr[0]=2;
	else
	arr[0]=1;
	for(int i=d-1;i>=0;i--)
	printf("%d",arr[i]);
	return 0;
}

