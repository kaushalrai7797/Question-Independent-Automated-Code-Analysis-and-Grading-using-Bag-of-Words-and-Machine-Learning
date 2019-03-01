#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int a,b,n,max,min;
        scanf("%d%d%d",&a,&b,&n);
        for(int i=1;i<=n;i++){
            if(i%2==1){
                a=a*2;
            }
            if(i%2==0){
                b=b*2;
            }
        }
        int c=a;
        int d=b;
        if(c<=d){
            max=d/c;
            printf("%d\n",max);
        }
        else{
            min=c/d;
            printf("%d\n",min);
        }
    }
}