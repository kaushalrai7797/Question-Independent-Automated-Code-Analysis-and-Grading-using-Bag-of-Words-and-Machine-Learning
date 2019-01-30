#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	 int n,count=0;
	 scanf("%d",&n);
	 char str[n];
	 scanf("%s",str);
	 for(int i=0;i<n;i++)
    	 { if(str[i]!='1')
    	   continue;
    	   else if(str[i]=='1')
    	    { count++;}
	 for(int j=n;j>i;j--)
	  {  if(str[j]!='1')
	     continue;
	    else if(str[j]=='1'){ count++;} 
	  }
	 } printf("%d\n",count);
	}
	return 0;
}

