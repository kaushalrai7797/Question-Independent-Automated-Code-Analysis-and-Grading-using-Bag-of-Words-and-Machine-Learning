#include<stdio.h>

int main()
{
	
	long long int t,n,k,s;
	int bought;
	int day;
	int temp;
	scanf("%lld",&t);
	
	while(t--){
		
		day=1;
		scanf("%lld%lld%lld",&n,&k,&s);
		temp=n;
		bought=1;
		while(s!=0){
			
		
			if(n<k&&day!=7){
			bought++;
			n=temp+n;
		}	
		
			n=n-k;
		
		
			
			day++;
			s--;
			if(day==7){
			day=1;	
				
			}
	
			
		
			
			
			
		}
		
	
		
		
		if(n>=k&&s==0){
			printf("%d\n",bought);
		}
		
		else{
			printf("-1\n");
		}
		
		
		
	}
	
	
	
	
	
	return 0;
}