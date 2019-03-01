#include <stdio.h>
int main(){
        int a,b,c,d=0,r1=0,r2=0;
        scanf("%d%d%d",&a,&b,&c);
        d=(b*b)-(4*a*c);
        if(d==0){
            r1=-b/(2*a);
            r2=-b/(2*a);
        }
        if(d>0){
            r1=(-b+sqrt(d))/(2*a);
            r2=(-b-sqrt(d))/(2*a);
        }
        printf("%d\n",r1);
        printf("%d\n",r2);
}