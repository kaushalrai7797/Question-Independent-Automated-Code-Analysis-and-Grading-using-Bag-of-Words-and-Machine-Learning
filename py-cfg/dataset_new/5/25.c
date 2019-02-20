#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    int r1,r2;
    scanf("%d%d%d",&a,&b,&c);
    int d = (b*b)-(4*a*c);
   // printf("%d %d %d %d",a,b,c,d);
    if(d>0){
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
    }
    else if(d==0){
        r1 = -b/(2*a);
        r2 = -b/(2*a);
    }
    printf("%d\n%d\n",r1,r2);
}