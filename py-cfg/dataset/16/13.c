#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main(){
    int a[MAX],n,i,j,q,b[MAX],sum = 0;

    scanf("%d",&n);

    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }//  this is the array value

    scanf("%d",&q);
    for(i = 0 ; i < q ; i ++){
        scanf("%d",&b[i]);
    }//  this for the value of k

    // sorting of the array is done here
    for(i = 0 ; i < n-1;i++){
        for (j = 0 ; j < n - i - 1; j ++){
                if(a[j]>a[j+1]){
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
        }
    }
    for(i =0 ; i< q;i++){
        for(j = 0 ; j < n-b[i];j++){
                if(a[j]!= b[i]){
                   sum = sum+a[j];
                }
        }
        sum =sum+b[i];
        printf("%d \n",sum);
        sum = 0;
    }

return 0;
}
