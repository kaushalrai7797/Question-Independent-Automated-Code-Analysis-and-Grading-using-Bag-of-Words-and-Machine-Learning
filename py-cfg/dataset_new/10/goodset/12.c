#include <stdio.h>

int main() {int t,i;
scanf("%d",&t);
while(t--){int a=0,b=0;
    char s[100];
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='s'){a++;
        }else if(s[i]=='m'){b++;}
    }
    for(i=0;s[i]!='\0';){
        if((s[i]=='s'&&s[i+1]=='m')||(s[i]=='m'&&s[i+1]=='s')){
            a--; i+=2;
        }else{i++;}
    }
    if(a>b){printf("snakes\n");}
    else if(a==b){printf("tie\n");}
    else{printf("mongooses\n");}
}
	
	return 0;
}