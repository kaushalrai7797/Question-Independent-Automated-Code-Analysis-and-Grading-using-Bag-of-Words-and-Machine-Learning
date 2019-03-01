#include<stdio.h>
#include<stdlib.h>
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
		velocity=(50*d*18/5)/t;
		velocity +=s;
		if(abs(sg-velocity)>abs(fg-velocity))
			status[i]=0;	//Father right
		else if(abs(sg-velocity)<abs(fg-velocity))
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
			printf("DRAW");
}
