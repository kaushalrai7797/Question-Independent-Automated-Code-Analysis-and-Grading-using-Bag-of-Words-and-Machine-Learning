#include <stdio.h>

int main(void) {
    int w;
    float b;
    scanf("%d",&w);
    scanf("%f",&b);
    if(w>0 && b>=0 && b>=w+0.50)
    {

    if(w%5==0 )
    {
        b=b-(w+0.50);
        printf("%.2f",b);
    }
    }
    else
    {
        printf("%.2f",b);
    
    }
    
	// your code goes here
	return 0;
}

