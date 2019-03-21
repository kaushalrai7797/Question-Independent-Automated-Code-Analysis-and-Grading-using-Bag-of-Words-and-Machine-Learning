#include<stdio.h>

int main(){
    long long a,b,x,y,g,r,h,p,q,c1,c2,i,s;
    scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
    g=x;h=y;
    while(y!=0){
        r=x%y;
        x=y;
        y=r;
    }
    p=g/x;q=h/x;
    c1=a/p;
    c2=b/q;
    if(c1>c2)printf("%lld\n",c2);
    else printf("%lld\n",c1);
    return 0;
}
