#include<stdio.h>
#include<string.h>
char arr[1000001];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int len=0,mid=0,i=0,m=-1;
        scanf("%s",arr);
        len=strlen(arr);
        mid=len/2;
        for(i=0;i<mid;i++){
            if(arr[i]<arr[len-1-i])
                m=1;
            else if(arr[i]>arr[len-1-i])
                m=0;
            arr[len-i-1]=arr[i];
        }

        if(m==0)
            printf("%s\n",arr);
        else{
            if(len%2==0)
                mid--;
            m=-1;
            for(i=mid;i>=0;i--){
                if(arr[mid]!='9'){
                    arr[i]=arr[i]+1;
                    arr[len-1-i]=arr[i];
                    printf("%s\n",arr);
                    m=0;
                    break;
                }
                else{
                    arr[i]=arr[len-1-i]='0';
                }
            }
            if(m==-1 && i>=0)
                printf("%s\n",arr);
            else if(i==-1){
                arr[len-1]='1';
                printf("1%s\n",arr);
            }

    }
}
return 0;
}
