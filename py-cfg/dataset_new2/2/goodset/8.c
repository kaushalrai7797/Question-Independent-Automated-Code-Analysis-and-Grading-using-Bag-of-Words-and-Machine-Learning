#include<stdio.h>
int main(void){
long long int a,b,x,y,e,f,m,i,j,k;
scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
j=x;
k=y;
for(i=0;  ;i++){
if(x>=y){
if(x%y==0){
m=y;
break;}
else
x=x%y;}
else {
if(y%x==0){
m=x;
break;}
else
y=y%x;} }
j=j/m;
k=k/m;
e=a/j;
f=b/k;
if(e<f)
printf("%lld",e);
else if(e>f)
printf("%lld",f);
else
printf("%lld ",e);
return 0;}
