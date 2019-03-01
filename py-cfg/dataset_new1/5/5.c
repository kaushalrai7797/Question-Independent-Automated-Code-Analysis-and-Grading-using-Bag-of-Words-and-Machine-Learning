#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d = (b *b )-(4 * a*c);
 //   printf("%d\n",d);
    if(d>0) {
         int r1 = (-b + sqrt(d))/(2*a);
         int r2 = (-b - sqrt(d))/(2*a);
         printf("%d\n%d\n",r1,r2);
     } else if(d==0){
         int r1,r2;
         r1 = r2 = (-b)/(2*a);
         printf("%d\n%d\n",r1,r2);
     }
}