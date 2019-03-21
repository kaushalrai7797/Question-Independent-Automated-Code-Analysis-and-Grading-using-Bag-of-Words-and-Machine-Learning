#include<stdio.h>

int main(){
	 long long int i=0,a,b,x,y,q,w;
	scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
	q=x;
	w=y;
	while(w!=0){
		i=0;
		if(w>q){
			q=q+w;
			w=q-w;
			q=q-w;
		}
//		printf("%lld %lld\n",w,q);
		i=w;
		w=q%w;
		q=i;
		}
//	printf("%lld",q);
	x=x/q;
	y=y/q;
	if(b/y>a/x)
		printf("%lld\n",a/x);
	else printf("%lld\n",b/y);

	return 0;
}
