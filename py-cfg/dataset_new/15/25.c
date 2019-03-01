#include<stdio.h>
int main(){
    long int t,n;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld",&n);
        long int a[n],b[n],i,j=0,r=0,f=0;
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
        scanf("%ld",&b[i]);
        for(i=0;i<n;i++){
            if(b[i]>=a[i])
            f++;
        }j=0;
        for(i=n-1;i>=0;i--){
            if(b[j]>=a[i])
                r++;
            j++;
        }
        if(f==r&&f==n)
        printf("both\n");
        else if(r==n&&f<n)
        printf("back\n");
        else if(f==n&&r<n)
        printf("front\n");
        else
        printf("none\n");
    }
    return 0;
}