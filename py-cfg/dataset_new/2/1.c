#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int m,n;
        scanf("%d%d",&m,&n);
        int a[m],b[n],c=0;
        for(int j=0;j<m;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            scanf("%d",&b[j]);
        }
        for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(a[j]==b[k]){
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
}