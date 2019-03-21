#include<stdio.h>
#include<string.h>
int main(){
    int t,i;
    scanf("%d",&t);
    getchar();
    while(t--){
        int *hash;
        hash=(int*)malloc(95*sizeof(int));
        for(i=0;i<95;i++)
            hash[i]=0;

        char *str;
        str=malloc(315*sizeof(char));
        fgets(str,315,stdin);

        for(i=0;i<strlen(str)-1;i++){
            hash[str[i]-32]=1;
            //printf("%c\n",str[i]);
        }

        char c;
        for(c='a';c<='z';c++){
            if(hash[c-32]==0 && hash[c-32-2]==0){
                printf("%c\n",c);
                break;
            }
        }
        if(c>'z')
            printf("~\n");
        free(hash);
        free(str);

    }

    return 0;
}
