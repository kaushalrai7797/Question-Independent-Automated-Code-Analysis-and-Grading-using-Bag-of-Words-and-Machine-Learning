#include <stdio.h>

int main() {
	int a,c=0,d=0;
	scanf("%d", &a);
	int b[a];
	for(int i=0;i<a;i++)
	{
	    scanf("%d", &b[i]);
	}

	for(int i=0;i<a;i++)
	{
	    c=c+b[i];

	}

	for(int i=1;i<=a;i++)
	{
	    d=d+i;
	}
    if(d==c)
    {
        printf("YES");

    }
    else
    printf("NO");
}
