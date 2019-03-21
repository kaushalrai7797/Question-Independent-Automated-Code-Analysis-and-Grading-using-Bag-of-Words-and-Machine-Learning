#include<stdio.h>

int main(void)
{
	long long a,b,x,y,count=0;
	scanf("%llu%llu%llu%llu",&a,&b,&x,&y);
	for(int w=1; w<=a; w++)
		for(int h=1; h<=b; h++)
			if(w*y==x*h)
				count++;
	printf("%llu",count);
	return 0;
}
