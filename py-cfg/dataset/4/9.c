#include<stdio.h>
#include<string.h>
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--){
		long long int n,i,p=0,c=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			int j,k=0;
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
		}
		if(c>p&&(c-p)>=2)
		printf("superheroes\n");
		else if(p>c&&(p-c)>=3)
		printf("villain\n");
	    else
		printf("draw\n");
	}
}