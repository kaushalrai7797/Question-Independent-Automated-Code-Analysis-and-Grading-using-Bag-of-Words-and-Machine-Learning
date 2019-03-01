#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	scanf("%d",&x);
	float y;
	scanf("%f",&y);
	if(x%5!=0||x>=y){
	    printf("%.2f",y);
	}
	else{
	    printf("%.2f",y-x-0.50);
	}
	return 0;
}