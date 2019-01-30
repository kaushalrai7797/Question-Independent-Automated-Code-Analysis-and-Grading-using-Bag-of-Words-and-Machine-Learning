
#include <stdio.h>

int main(){

 int t;
 scanf("%d",&t);
 while(t--){
  int n;
  long int count=0;
  scanf("%d",&n);
  char s[n];
  scanf("%s",s);
  for(int i=0;i<n;i++){
   if(s[i]=='1')
      count++;
  }
  printf("%ld\n",(count*(count+1))/2);
 }
 return 0;
}
