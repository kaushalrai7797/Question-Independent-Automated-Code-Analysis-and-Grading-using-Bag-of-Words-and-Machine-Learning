#include <stdio.h>

 int main(void)
 {   long int n,i,a[100001],sum,sumN;
 	scanf("%ld",&n);
 	for(i=0;i<n;i++)
 	 scanf("%ld ",&a[i]);

 	 sum=0;

 	 for(i=0;i<n;i++)
 	  sum+=a[i];

 	  sumN=((n+1)*n)/2;

 	  if(sumN==sum)
 	   printf("YES\n");
 	  else
 	   printf("NO\n");
 	return 0;
 }
