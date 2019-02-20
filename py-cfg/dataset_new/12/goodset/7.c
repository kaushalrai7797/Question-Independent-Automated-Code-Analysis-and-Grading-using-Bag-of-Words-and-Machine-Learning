#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int ln,count=0;
        scanf("%d",&ln);
        int a[ln];
        for(int j=0;j<ln;j++){
            scanf("%d",&a[j]);
        }
        int l;
        scanf("%d",&l);
        int b[l];
        for(int k=0;k<l;k++){
            scanf("%d",&b[k]);
        }
        for(int j=0;j<l;j++){
            for(int k=0;k<ln;k++){
                if(a[k]==b[j]){
                    count++;
                    break;
                }
            }
        }
        if(count==l){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
	return 0;
}

