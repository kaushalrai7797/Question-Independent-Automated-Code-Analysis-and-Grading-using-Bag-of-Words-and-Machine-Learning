#include <stdio.h>
#include <stdlib.h>
int digsum(long long int n){
    int ds=0;
    long long int num=n;
    while(num>=1){
        ds+=num%10;
        num/=10;
    }
    return ds;
}
int main()
{
    int tc;
    scanf("%d",&tc);
    for (int i=0;i<tc;i++){
    int a;
    long long int n;
    scanf("%lld",&n);
    /*printf("%d\n",digsum(n));*/
    a=digsum(n);
    if (a<9){printf("%d",9-a);}
    else if((a%9)>4){
        printf("%d",9-(a%9));
    }
    else{
        printf("%d",a%9);
    }
    }
    return 0;
}
