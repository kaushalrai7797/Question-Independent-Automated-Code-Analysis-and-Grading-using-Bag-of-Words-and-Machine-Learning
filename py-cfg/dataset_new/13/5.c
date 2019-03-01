#include<stdio.h>
int main()
{
int x;
float p,y;
scanf("%f%d",&y,&x);
if(x%5!=0)
{
printf("%d\n",x);
}
else
{
p=x-y-0.5;
printf("%f\n",p);
}
return 0;
}


