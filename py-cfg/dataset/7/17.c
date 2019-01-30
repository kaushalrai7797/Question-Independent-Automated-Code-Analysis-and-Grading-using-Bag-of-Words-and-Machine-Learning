#include <stdio.h>
#include<string.h>

int main() 
{
    unsigned   long long int sum=0,r,t,a,d,i;
    
  char num[100005];
    scanf("%lld",&t);
    while(t!=0)
    {  sum=0;
            scanf("%s",num);
          	for(i=0; i<strlen(num); i++)
		    {	
		        sum+=num[i]-'0';
		    }
	
		    r=sum/9;
	
		    d=sum-(r*9);
		    a=((r+1)*9)-sum;
		    if(d<1)
		    d=d*-1;
		    if(a<1)
		    a=a*-1;
		    
		    if((sum-d)>0 && d<a)
		     {
		         printf("%lld\n",d);
		     }
		 else
		 {
		       printf("%lld\n",a);
		 }
		 
		 
		    
		    --t;
  
    }
    
    
    return 0;
}