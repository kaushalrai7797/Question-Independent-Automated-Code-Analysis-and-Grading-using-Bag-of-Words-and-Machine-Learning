#include <stdio.h>

int main(void) {
long long int t,a,b,c,d,i,j;
scanf("%d",&t);
while(t--){long long int e=0;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    for(i=a;i<=b;i++){
        for(j=c;j<=d;j++){
            if(j>i){
                e++;
            }
        }
    }
    printf("%lld\n",e);
}
	return 0;
}

