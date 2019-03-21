#include<stdio.h>
int main(){
int t,i,n,k,count1,count2,rem1,rem2,flag;
int A[100];
scanf("%d",&t);
while(t--){
        flag=0;
        rem1=0;
     rem2=-1;
   count1=0;
   count2=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    rem1=A[0]%(k+1);
    count1=0;
    for(i=1;i<n;i++){
        if(A[i]%(k+1)==rem1){
            count1++;
        }
        else{
            if(rem2!=-1){
                if(A[i]%(k+1)==rem2){
                    count2++;
                }
                else{
                    flag=1;
                    break;
                }
            }
            else{
                rem2=A[i]%(k+1);
                count2=1;
            }
        }
    }
   if(flag==1){
    printf("NO\n");
   }
   else{
    if(count1>=n-1 || count2>=n-1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
   }
}
return 0;
}
