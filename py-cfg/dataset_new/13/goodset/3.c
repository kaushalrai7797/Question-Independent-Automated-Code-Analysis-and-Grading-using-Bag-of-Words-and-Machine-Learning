#include <stdio.h>

int main(void) {
	int x;
	float y;
	scanf("%d%f",&x,&y);
	if(x%5 != 0)
	    printf("%.2f",y);
	else if(((float)x+0.5) > y)
	    printf("%.2f",y);
	else
	{
	    float z = y - (float)x -0.5;
        printf("%.2f",z);
	}
	return 0;
}

