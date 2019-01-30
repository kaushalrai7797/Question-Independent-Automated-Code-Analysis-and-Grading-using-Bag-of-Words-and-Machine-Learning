#include <stdio.h>

int main(void) {
	// your code goes here
	int A,B,C;
	scanf("%d %d",&A,&B);
	C= A-B;
	if(10<=C && C<100)
     C=C+C%3+C%5;
	else if(100<=C && C<1000)
	C=C+C%3+C%5;
    else if(1000<=C && C<10000)
	C=C+C%3+C%5;
		printf("%d",C);
	return 0;
}

