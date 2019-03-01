#include<stdio.h>

long long f(long long a)
{
     long long res[] = {a,1,a+1,0};
     return res[a%4];
}

long long getXor(long long a, long long b)
{
          return f(b)^f(a-1);
}
int main(void)
{
    int T;

    scanf("%d",&T);
    while(T>0)
    {
       long long L,R,xor;
       scanf("%lld %lld",&L,&R);
       xor=getXor(L,R);
       if(xor%2==0) printf("Even\n");
       else printf("Odd\n");



       T--;
    }
   return 0;
}


