#include <stdio.h>

int main() {
	int T,X,Y,k;
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
		scanf("%d %d",&X,&Y);
		while(X!=Y && X!=0 && Y!=0)
		{
			if(X>Y)
				X-=Y;
			else
				Y-=X;
		}
		printf("%d\n",X+Y);
	}
	return 0;
}

