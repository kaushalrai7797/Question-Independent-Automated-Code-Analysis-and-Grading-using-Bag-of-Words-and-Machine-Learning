#include<stdio.h>
int main(void)
{
    long long int n,a[1000000],b[1000000],m[1000000],i,j,z,x,d,f;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%d%d%d",&a[i],&b[i],&m[i]);
    for(j=1;j<=m[i];j++){
        if(j%2==0){
            b[i]=b[i]*2;
        }
        else{
            a[i]=a[i]*2;
        }
    }
    if(b[i]>a[i]){
        d=b[i]/a[i];
        printf("%d\n",d);
    }
    else{
        f=a[i]/b[i];
        printf("%d\n",f);
    }
    d=0;
    f=0;
    }
}