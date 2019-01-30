#include<stdio.h>
int main(){
int a,b,k,t,i;
scanf("%d",&t);
for(i=0;i<t;i++){
    int num,j;
    scanf("%d\t%d\t%d",&a,&b,&k);
    int arr[b-a+1];
    int prime[b-a+1];
    arr[0]=a;
     for(j=0;j<b-a+1;j++){
        prime[j]=0;
    }
    for(j=1;j<b-a+1;j++){
        arr[j]=a+j;
    }
    for(j=0;j<b-a+1;j++){
        while(arr[j]%2==0){
            arr[j]=arr[j]/2;
            prime[j]++;
            break;
        }
        while(arr[j]%2==0){
            arr[j]=arr[j]/2;
        }
    }
 arr[0]=a;
          for(j=1;j<b-a+1;j++){
        arr[j]=a+j;
          }
          for(j=0;j<b-a+1;j++){
    for(num=3;num<=arr[j];num=num+2){
        while(arr[j]%num==0){
            arr[j]=arr[j]/num;
            prime[j]++;
            break;
        }
         while(arr[j]%num==0){
            arr[j]=arr[j]/num;
        }
    }
    }
    int sum=0;
    for(j=0;j<b-a+1;j++){
           if(prime[j]==k)
            sum++;
            }
           printf("%d\n",sum);
}
return 0;
}
