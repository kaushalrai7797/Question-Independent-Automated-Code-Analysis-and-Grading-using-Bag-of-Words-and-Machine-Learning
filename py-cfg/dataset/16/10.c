#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[100000],n,i,j,q,b[100000],sum = 0;
    printf("enter the values in the array\n");
    scanf("%d",&n);
    printf("enter the values in the array\n");
    for(i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }//  this is the array value
    printf("enter the value of the q \n");
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
        printf("here is the sum %d \n",sum);
        sum = 0;
    }

return 0;
}
