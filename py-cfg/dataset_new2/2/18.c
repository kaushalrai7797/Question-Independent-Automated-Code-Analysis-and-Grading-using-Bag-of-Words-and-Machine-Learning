#include <stdio.h>
int main(void) {
    long long a,b,x,y;
	long long w,h,sum=0;
	scanf("%ld%ld%ld%ld",&a,&b,&x,&y);
	    for(w=1;w<=a;w++){
	    	for(h=1;h<=b;h++){
	    		if(x*h==y*w){
	    			sum++;
					}
				}
			}
		printf("%ld",sum);
		return 0;
	}
	 
