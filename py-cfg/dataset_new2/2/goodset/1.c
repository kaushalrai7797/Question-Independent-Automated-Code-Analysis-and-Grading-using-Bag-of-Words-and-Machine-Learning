#include <stdio.h>
main(){
    long long int a,b,x,y,temp;
 scanf("%I64d %I64d %I64d %I64d",&a,&b,&x,&y);
 long long int t1=x,t2=y;
 while(t2!=0){
     temp=t2;
     t2=t1%t2;
     t1=temp;
 }
    x=x/t1;
    y=y/t1;
    if(a/x<b/y) printf("%I64d",a/x);
    else printf("%I64d",b/y);

}
