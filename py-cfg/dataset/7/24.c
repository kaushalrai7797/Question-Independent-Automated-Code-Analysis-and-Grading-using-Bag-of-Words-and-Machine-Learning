#include <stdio.h>
#include<string.h>

int main() 
{
    unsigned   long long int sum=0,r,t,a,b,i;
    
  char num[100005];
    scanf("%lld",&t);
    while(t!=0)
    {  sum=0;
            scanf("%s",num);
          	for(i=0; i<strlen(num); i++)
		    {	
		        sum+=num[i]-'0';
		    }
		    a=strlen(num);
		 
		 
		    
		   if(sum<9 && a>1)
      {
          printf("%lld",9-sum%9);
      }
      else {
          if((sum%9)<(9-sum%9))
          printf("%lld\n",sum%9);
          else
           printf("%lld\n",9-sum%9);
      }
      
		    
		    
		    --t;
  
    }
    
    
    return 0;
}