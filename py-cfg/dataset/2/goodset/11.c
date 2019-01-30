#include<stdio.h>
#include<string.h>
int main()
{ char a[5000001];
  long long int l;
    int t;
    scanf("%d",&t);
    while(t--){
        
        scanf("%s",&a);
        l=strlen(a);
        long long int count=0,s=0,e=0,i;
        for(i=0;i<l;i++){
            e++;
            if(a[i]=='<')
            {
                s++;
            }
            if(a[i]=='>')
            {
                s--;
                
            }
            if(s<0)
            {
                break;
            }
            if(s==0)
            {
                count=e;
            }
        }
        printf("%d\n",count);
        
    }
    
    return 0;
    
}