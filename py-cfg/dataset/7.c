#include <stdio.h>

int main(void) {
	int num,rev,rem,t;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&num);
	    rev=0;
	    while(num>0)
	    {
	        rem=num%10;
	        rev=(rev*10)+rem;
	        num=num/10;
	    }
	    printf("%d\n",rev);
	}
	return 0;
}

