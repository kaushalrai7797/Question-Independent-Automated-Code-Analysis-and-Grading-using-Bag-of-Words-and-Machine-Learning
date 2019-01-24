#include<stdio.h>
int main(){
int t,n,k;
scanf("%d",&t);
while(t--){
scanf("%d %d",&n,&k);
int a[n],i,l=0;
for(i=0;i<n;i++) scanf("%d",&a[i]);
if(a[0]>k)
{
if(a[0]%k==0)
l=l+a[0]/k-1;
else
l=l+a[0]/k;
}
for(i=0;i<n-1;i++){
if((a[i+1]-a[i])>k){
if((a[i+1]-a[i])%k==0)
l=l+(a[i+1]-a[i])/k-1;
else
l=l+(a[i+1]-a[i])/k;
}
}
printf("%d\n",l);
}
return 0;
}