#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        long int a,d,res,sum;
        scanf("%d%ld%d",&n,&a,&k);
        sum=(n-2)*180;
        d= ((2*sum/n)-2*a)/(n-1);
        
        res=a+(k-1)*d;
        
        printf("%ld 1\n",res);
        
    }
	// your code goes here
	return 0;
}

