#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,x1,x2,d;
scanf("%f\n%f\n%f",&a,&b,&c);
d=sqrt(b*b-4*a*c);
x1=(-b+d)/2*a;
x2=(-b-d)/2*a;
printf("%f\n",x1);
printf("%f\n",x2);
}
