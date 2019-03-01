#include <stdio.h>

int main(void) {
	int t,c,d,l;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d",&c,&d,&l);
	    if((((c+d)-(d*4))>l) || l%2!=0 ||((c+d)*4)<l)
	        printf("no\n");
	    else
	        printf("yes\n");
	}
	return 0;
}

