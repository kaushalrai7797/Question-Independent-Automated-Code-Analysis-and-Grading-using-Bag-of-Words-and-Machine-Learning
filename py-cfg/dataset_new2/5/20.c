#include<stdio.h>
#include<math.h>

int checkPalin(int n){
    int x = n,count = 0, w = n;
    while(x!=0){
        count++;
        x /= 10;
    }
    int digit[count], y = count -1;
    while(w!=0){
        digit[y] = w%10;
        y--;
        w /= 10;
    }
    int z = 0;
    for(int i = 0;i<count;i++){
        z += digit[i]*pow(10,i);
    }
    if(z == n) return 1;
    else return 0;
}

int main(){
    int T,k;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&k);
        for(int i = k+1;i<2*k;i++){
            if(checkPalin(i)){
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}
