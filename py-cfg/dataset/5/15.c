#include<stdio.h>
int main(){
	long long t,d,c,f,a,ra ,b,i,j,num[120];
	scanf("%d",&t);
	for(i=1,j=0;i<=100000;i++){
		a=i*i;
		f=0;
		while(a>0){
			d=a%10;
			if(d!=0&&d!=1&&d!=4&&d!=9){
				f=1;
				break;
			}
			a/=10;
		}
		if(f==0) num[j++]=i*i;
	}
	while(t--){
		scanf("%lld%lld",&a,&b);
		c=0;
		for(i=0;i<120;i++) if(a<=num[i]&&num[i]<=b) c++;
		printf("%d\n",c);
	}
}
