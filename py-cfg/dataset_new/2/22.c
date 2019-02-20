#include <stdio.h>

int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{  int n,m;
	   scanf("%d\n%d",&n,&m);
	   int a[n],b[m],i,c=0,j;
	   for(i=0;i<n;i++)
	   {
	       scanf("%d",&a[i]);
	   }
	   for(j=0;j<m;j++)
	   {
	       scanf("%d",&b[j]);
	   } 
	   for(i=0;i<n;i++)
	   {
	    for(j=0;j<m;j++)
	       {
	           if(a[i]==b[j])
	           {
	               c++;
	           }
	       }
	   }
	   
	   printf("%d\n",c);
	   
	}
	return 0;
}
