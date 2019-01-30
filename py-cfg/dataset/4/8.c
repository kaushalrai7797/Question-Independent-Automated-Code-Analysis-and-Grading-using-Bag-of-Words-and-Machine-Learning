#include<stdio.h>
#include<string.h>
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int n,i,p=0,c=0,l,y;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			int j,k=0,l=1,y=1;
			char s[1000],x[1000];
			scanf("%s",s);
			j=strlen(s)-3;
			while(j>strlen(s)-4&&s[j]!='\0'){
				x[k]=s[j];
				k++;
				j++;
			}
			x[k]='\0';
			if(strcmp(x,"man")==0)
			c++;
			else 
			p++;
			if(c-p==2){
				l=1;
				break;
			}
			
			if(p-c==3){
				y=1;
		}
		}
		if(l==1)
		printf("superheroes\n");
		if(y==1)
		printf("villains\n");
		else
		printf("draw\n");
	}
}