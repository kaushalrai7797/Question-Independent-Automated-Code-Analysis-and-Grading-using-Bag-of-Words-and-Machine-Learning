#include <stdio.h>
#include<stdlib.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	long long int a,b,c,d,x,y,s=0;
	    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	    x=a;y=c;
	    while(x<=b){
	        while(y<=d){
	            if(y>x){s++;
	                
	            }
	            y++;
	        }
	        y=c;
	        x++;
	    }
	    printf("%lld\n",s);
	    
	 
	}
	return 0;
}