#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,i,a[10000],a1cnt,a2cnt,a1,a2;

	scanf("%d",&t);
	while(t--)
	{
	    a1cnt=1;
	a2cnt=1;
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    a1=a[0]%(k+1);
	    a2=a[1]%(k+1);
	    for(i=2;i<n;i++)
	    {
	        if(a[i]%(k+1)==a1){
	            a1cnt=a1cnt+1;}
	        else
	        {
	            if(a[i]%(k+1)==a2)
	                a2cnt=a2cnt+1;
	        }
	    }
	    if(n==2){
	        printf("YES\n");}
	    else{
	    if((a1cnt==n-1)||(a2cnt==n-1)||(a1cnt==n)||(a2cnt==n))
	        printf("YES\n");
	       else
	       printf("NO\n");}
	}
	return 0;
}
