#include<stdio.h>
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        char r[1005],s[1005];
        int arr[150]={0};
        scanf("%s %s",r,s);
        int i;
        for(i=0;r[i]!='\0';i++){
            arr[(int)r[i]]++;
        }
        int chef=1;
        int arrb[150]={0};
        for(i=0;s[i]!='\0';i++){
            arrb[(int)s[i]]++;
        }
        for(i=97;i<123;i++){
        	if((arr[i]==0 && arrb[i]!=0) || (arrb[i]==0 && arr[i]!=0)){
        		chef=0;
                	break;
        	}
        }
        if(chef==0){
            printf("YES\n");
            continue;
        }
        int flag=1;
        for(i=97;i<123;i++){
            if(arr[i]!=arrb[i]){
                flag=0;
                break;
            }
        }
        if(flag)
            printf("YES\n");
        else{
            printf("NO\n");
        }
    }
    return 0;
}
 