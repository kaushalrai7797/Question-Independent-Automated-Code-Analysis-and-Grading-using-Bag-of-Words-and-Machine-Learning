#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    scanf("%f%f%f",&a,&b,&c);
    d=sqrt((b*b)-(4*a*c));
    float x1=(-b+d)/(2*a);
    float x2=(-b-d)/(2*a);
    printf("%f\n%f\n",x1,x2);
}