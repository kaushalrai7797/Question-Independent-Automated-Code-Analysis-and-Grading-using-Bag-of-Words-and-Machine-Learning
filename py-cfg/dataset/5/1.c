#include <stdio.h>
#include<math.h>
int countsquares(long int ,long int );
int main(void) {
	// your code goes here
	int T,k;
	long int a,b;
	scanf("%d",&T);
	if(T<=500)
	{
	    while(T!=0)
	    {
	        scanf("%ld %ld",&a,&b);
	        k=countsquares(a,b);
	        printf("count is %d\n",k);
	        T--;
	    }
	}
	return 0;
}
int countsquares(long int a,long int b)
{
    return (floor(sqrt(b))-ceil(sqrt(a)))+1;
}

