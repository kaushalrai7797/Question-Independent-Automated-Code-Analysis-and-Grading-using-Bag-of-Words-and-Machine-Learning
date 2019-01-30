
#include <stdio.h>

int main(){

 int t;
 scanf("%d",&t);
 while(t--){
  int n,count=0;
  scanf("%d",&n);
  char s[n];
  scanf("%s",s);
  for(int i=0;i<n;i++){
   for(int j=i;j<n;j++){
    if (s[i]=='1' && s[j]=='1')
        count++;
   }
  }
  printf("%d\n",count);
 }
 return 0;
}
