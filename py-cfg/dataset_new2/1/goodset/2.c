#include <stdio.h>
#define MAX_LIMIT 315
int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    char z[23];
    gets(z);
    while(t--){
        char s[315];
        int ch[26]={0};
        int rem=26;
        //scanf("%[^\n]%*c", s);
        gets(s);
        //printf("%s",s);
        for(int i=0;s[i]!='\0';i++){
        	//printf("%c",s[i]);
            if(s[i]>=65 && s[i]<=90)
                s[i]+=32;
            if((s[i]>=97 && s[i]<=122))
                ch[s[i]-97]=1;
        }
        for(int i=0;i<26;i++){
            if(ch[i])
                rem-=1;
            else
                printf("%c",i+97);
        }
        if(rem==0)
            printf("~\n");
        else
            printf("\n");
    }
	return 0;
}
