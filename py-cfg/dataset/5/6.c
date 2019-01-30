#include<stdio.h>  
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int a,b,i,p=1,r,count=0,c1,c2,x;   
scanf("%lld %lld",&a,&b);
i=1;
while(p<a){
p=p+2*i+1;
i++;} 
a=p;
//i++;
//printf("%lld %lld\n",p,i);
c1=0;c2=0;
while(p!=0){
r=p%10;
c1++;
if(r==0||r==4||r==1||r==9)
c2++;
p=p/10;}
if(c1==c2)
count++;
//i++;
while(a<b){
a=a+2*i+1;
x=a;c1=0;c2=0;
while(x!=0){
r=x%10;
c1++;
if(r==0||r==1||r==4||r==9)
c2++;
x=x/10;}
if(c1==c2)
count++;
i++;
} 
printf("%lld\n",count);
} 
return 0;}