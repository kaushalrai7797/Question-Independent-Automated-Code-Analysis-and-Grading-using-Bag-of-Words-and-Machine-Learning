#include<stdio.h>
float abso(float a)
{
	if(a<0)
	return -a;
	else
	return a;
}
int main()
{
	float s,sg,fg,t,d;
	int n,i;
	float velocity;
	scanf("%d",&n);
	int status[n];
	for(i=0;i<n;i++)
	{
		scanf("%e %e %e %e %e",&s,&sg,&fg,&d,&t);
		velocity=(180*d)/t;
		velocity +=s;
		if(abso(sg-velocity)>abso(fg-velocity))
			status[i]=0;	//Father right
		else if(abso(sg-velocity)<abso(fg-velocity))
			status[i]=1;		//Son wins
		else
			status[i]=2;	//Draw
	}
	for(i=0;i<n;i++)
		if(status[i]==0)
			printf("FATHER\n");
		else if(status[i]==1)
			printf("SEBI\n");
		else
			printf("DRAW\n");
}
