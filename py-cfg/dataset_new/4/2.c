#include<stdio.h>
#include<stdlib.h>
int max(int x1 , int x2)
{
    if(x1>=x2){
        return x1;
    }
    else
    return x2;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,d,k,p,sum=0,i;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        for(i=a;i<=b;i++){
        k=max(c,i+1);
        p=(d-k+1);
          if(p>0){
            sum=sum+p;
          }
        }
        printf("%lld\n",sum);
    }
    return 0;
}


