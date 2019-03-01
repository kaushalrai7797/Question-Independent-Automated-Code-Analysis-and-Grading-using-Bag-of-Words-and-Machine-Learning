#include <stdio.h>
#include <math.h>
int main()
{
	int w;
	scanf("%d",&w);
	float cr;
	scanf("%f",&cr);
	if(w<=cr-0.5 && w%5==0)
	{
	    printf("%.2f", cr-w-0.5);
	}
	else
	{
	    printf("%.2f",cr);
	}
	
	return 0;
}

