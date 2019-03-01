#include <stdio.h>

int main(void) {
    int a,b,c,d,r1,r2;
    scanf("%d%d%d",&a,&b,&c);
    d = b*b-(4*a*c);
    if(d>0){
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
    }else if(d==0){
        r1 = (-b)/(2*a);
        r2 = (-b)/(2*a);
    }
        printf("%d\n%d",r1,r2);
	// your code goes here
	return 0;
}

