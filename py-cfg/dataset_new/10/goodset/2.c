#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	int t,i=0,j=0,cs=0,cm=0,l=0;
	char s[100];
	scanf("%d",&t);
	while(t--){
	    scanf("%s",s); 
	    l=strlen(s);
	    cm=0;
	    cs=0;
	    for(i=0;i<l;i++){
	        if(s[i]=='m'){
	            if(s[i-1]=='s'){
	                   s[i-1]='k';
	                   cm++;
	            }
	            else if(s[i+1]=='s'){
	                    s[i+1]='k';
	                    cm++;
	            }
	        }
	        if(s[i]=='s'||s[i]=='k')
	        cs++;
	    }
	    l=l-cm;
	    cs=cs-cm;
	        if(cs==(l-cs))
	            printf("tie\n");
	            else if(cs<(l-cs))
	                printf("mongooses\n");
	                else 
	                 printf("snakes\n");
	}
	return 0;
}

