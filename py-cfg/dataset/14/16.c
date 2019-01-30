#include <stdio.h>
#include <math.h>


int main(void) {
	// your code goes here
	int a,b,res,count=0,res1;
	scanf("%d %d",&a,&b);
	res=a-b;
	res1=res;
	while(res1!=0)
	{
	    res1/=10;
	    count++;
	}
	res=res+pow(10,(count-1));
	printf("%d",res);
	
	return 0;
}

