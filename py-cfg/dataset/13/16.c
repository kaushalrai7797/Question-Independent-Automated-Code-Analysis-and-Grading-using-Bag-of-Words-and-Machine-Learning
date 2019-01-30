#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	 int n,k,count=0;
	 scanf("%d",&n);
	 char str[n];
	 scanf("%s",str);
	 for(int i=0;i<n;i++)
    	 { if(str[i]=='1')
    	    { count++;}
    
	 }k=count*(count+1);
	 printf("%d\n",k/2);
	}
	return 0;
}

