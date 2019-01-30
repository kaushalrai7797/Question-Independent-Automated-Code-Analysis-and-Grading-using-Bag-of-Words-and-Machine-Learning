#include <stdio.h>

int main(void) {
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
	 long long int n,k,count=0;
	 scanf("%lld",&n);
	 char str[n];
	 scanf("%s",str);
	 for(long long int i=0;i<n;i++)
    	 { if(str[i]=='1')
    	    { count++;}
    
	 }k=count*(count+1);
	 printf("%lld\n",k/2);
	}
	return 0;
}

