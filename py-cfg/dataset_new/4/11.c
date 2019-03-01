#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n--){
	    int a,b,c,d, result;
	    scanf("%d",&a);
	    scanf("%d",&b);
	    scanf("%d",&c);
	    scanf("%d",&d);
	    if( a > b || c > d){
	        result = 0;
	    }else if( a <= b && b < c && c <= d){
	        int possible_x = b - a + 1;
	        int possible_y = d - c + 1;
	        result = possible_y * possible_x;
	    }else if(a <= b && c <= d && b == c){
	        int possible_x = (b-1) - a + 1;
	        int possible_y = d - c + 1;
	        result = possible_y * possible_x;
	    }else if(a <= b && c <= d && b > c){
	        int possible_x = c - a + 1;
	        int possible_y = d - b + 1;
	        result = possible_y * possible_x;
	    }
	    printf("%d",result);
	    
	}
	return 0;
}

