#include<stdio.h>
#include<math.h>
int main(){
int t;
scanf("%d",&t);
while(t--){
long long int a,b,m,n,i,r,c,count=0,x;
scanf("%lld %lld\n",&a,&b);
m=(int)sqrt(a);
if(a!=m*m)
m++;
n=(int)sqrt(b);
for(i=m;i<=n;i++){
x=i*i;c=1;
while(x!=0){
r=x%10;
if(r!=0&&r!=1&&r!=4&&r!=9){
c=0;
break;
}
x=x/10;
}
if(c==1)
count++;}
printf("%lld\n",count);
}
return 0;
}