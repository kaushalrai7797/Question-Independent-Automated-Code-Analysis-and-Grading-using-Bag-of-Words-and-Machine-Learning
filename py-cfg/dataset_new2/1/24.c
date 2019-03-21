#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int t, a[26], i, x, n;
    char s[315];

    scanf("%d",&t);
    getchar();
    while(t--){
        x=0;
        memset(a,0,sizeof(a));
        fgets(s,sizeof(s),stdin);
        n = strlen(s);
        for(i=0;i<n;i++){
            if((s[i]>='a')&&(s[i]<='z'))
                a[s[i]-'a'] = 1;
            if((s[i]>='A')&&(s[i]<='Z'))
                a[s[i]-'A'] = 1;
        }
        for(i='a';i<='z';i++){
            if(a[i-'a']==0){
                printf("%c\n",i);
                x=1;
                break;
            }
        }
        if(x==0){
            printf("~\n");
        }
    }
    return 0;
}
    
