#include <stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sq,x1,x2;
    scanf("%f%f%f",&a,&b,&c);
    sq=sqrt((b*b)-4*a*c);
    x1=(-b-sq)/(2*a);
    x2=(-b+sq)/(2*a);
    printf("%d\n%d",x2,x1);
    return 0;
}