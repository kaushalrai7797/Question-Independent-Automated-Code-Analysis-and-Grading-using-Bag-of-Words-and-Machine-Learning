#include<stdio.h>
int chck(long int, int);
long int sv[100010];
int main(){
	int k;
	long int a, b, d=0, t;
	scanf("%ld", &t);
	for(long int i=0;i<=100000;i++)
		sv[i]=0;
	for(long int i=2;i*i<=100000;i++){
		if(sv[i]==0){
			for(long int j=i*i; j<=100000;j+=i)
				sv[j]=1;
		}
	}
	for(long int j=0;j<t;j++){
		d=0;
		scanf("%ld %ld %d", &a, &b, &k);
		for(long int i=a;i<=b;i++){
				if(chck(i, k)){
					d++;
				}
			
		}
		printf("%ld\n", d);
	}
	
return 0;
}
int chck(long int a, int k){
	long int c=0;
	for(long int i=2;i<=a;i++){
		if(sv[i]==0){
			if(a%i==0)
				c++;
		}
	}
	if(c==k)
		return 1;
	else
		return 0;
}