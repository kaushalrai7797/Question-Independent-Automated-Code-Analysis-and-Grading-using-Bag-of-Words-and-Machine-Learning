#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
     long long int c,d,l;
     scanf("%ld%ld%ld",&c,&d,&l);
     long long int a,b=0;
     a=4*c+4*d;
     if(c-2*d>0){
         b=4*(c-2*d)+4*d;
     }
    else
        b=4*d;
    if(l>=b && l<=a && l%4==0)
        printf("yes\n");
    else 
        printf("no\n");
}
} 