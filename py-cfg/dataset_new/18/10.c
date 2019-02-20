#include<stdio.h>
int main()
{
	int t,n,q;
	scanf("%d",&t);
	while(t--)
	{
    scanf("%d %d",&n,&q);
    long long int arr[n],query[q],mul=1,i;
    for(i=0;i<n;i++)
      {
        scanf("%lld",&arr[i]);
        if(mul<10000000000)
          mul=mul*arr[i];
      }
    for(i=0;i<q;i++)
    {
      scanf("%lld",&query[i]);
      query[i]=query[i]/mul;
    }	
    for(i=0;i<q;i++)
    printf("%lld ",query[i]);	
      
    printf("\n");
	}
}  