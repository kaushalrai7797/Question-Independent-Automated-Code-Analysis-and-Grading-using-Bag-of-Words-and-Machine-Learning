#include <stdio.h>

int main(void){
    long long int p,q,a,b,t,x,y,i=1,j=1,k;

    scanf("%lld%lld%lld%lld",&a,&b,&x,&y);

    p=x;
    q=y;

    while(p%q!=0){
        t=q;
        q=p%q;
        p=t;
    }

    x=x/q;
	y=y/q;

	i=a/x;
	j=b/y;
	if(i>j){
		k=j;
	}
	else{
		k=i;
	}

    printf("%lld",k);
    return 0;
}
