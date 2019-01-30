#include<stdio.h>
#include<math.h>
void main()
{
int a,b,sum,sub,product,divide;
printf("enter two numbers:");
scanf("%d,%d,&a,&b");
sum=a+b;
sub=a-b;
product=a*b;
divide=a/b;
printf("sum=%d",sum);
printf("sub=%d",sub);
printf("mul=%d",product);
printf("divide=%d",divide);
}