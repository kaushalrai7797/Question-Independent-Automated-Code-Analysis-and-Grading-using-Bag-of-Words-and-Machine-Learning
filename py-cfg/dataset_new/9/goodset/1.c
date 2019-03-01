#include<stdio.h>
float mod(float x)
{
if(x>=0)
	return x;
return -x;
}

int main()
{
int T;
scanf("%d",&T);
short s,sg,fg,d,t;
float x;
while(T--)
{
	scanf("%hd%hd%hd%hd%hd",&s,&sg,&fg,&d,&t);
	x=s+(180*d)*1.0/t;
	if(mod(x-sg)<mod(x-fg))
		printf("SEBI\n");
	else if(mod(x-sg)>mod(x-fg))
		printf("FATHER\n");
	else // equal
		printf("DRAW\n");
}
return 0;
}

