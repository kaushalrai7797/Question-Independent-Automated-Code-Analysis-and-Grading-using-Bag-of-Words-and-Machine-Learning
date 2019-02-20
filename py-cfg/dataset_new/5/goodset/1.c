#include <stdio.h>
#include <math.h>
int main(){
        int a,b,c;
        float d=0,r1=0,r2=0;
        scanf("%d%d%d",&a,&b,&c);
        d=(b*b)-(4*a*c);
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("%f\n",r1);
        printf("%f\n",r2);
}