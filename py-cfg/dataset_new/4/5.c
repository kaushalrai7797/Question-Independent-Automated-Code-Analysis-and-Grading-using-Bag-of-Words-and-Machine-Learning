#include <stdio.h>
#include<stdlib.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
	  long int a,b,c,d,x,y,s=0;
	    scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
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
	    printf("%ld\n",s);
	    
	 
	}
	return 0;
}