#include<stdio.h>
float modulus(float a,float b);
int main()
{
	float s,sg,fg,t,d,car;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%f%f%f%f%f",&s,&sg,&fg,&d,&t);
		car = s+((d*180)/t);
		//printf("%f %f\n",modulus(car,sg),modulus(car,fg));
		if(modulus(car,sg) < modulus(car,fg))
		{
			printf("SEBI\n");
		}
		else if(modulus(car,sg) > modulus(car,fg))
		{
			printf("FATHER\n");
		}
		else 
		{
			printf("DRAW\n");
		}
	}
	return(0);
}
float modulus(float a,float b)
{
	if(a > b)
		return(a-b);
	else
		return(b-a);
}