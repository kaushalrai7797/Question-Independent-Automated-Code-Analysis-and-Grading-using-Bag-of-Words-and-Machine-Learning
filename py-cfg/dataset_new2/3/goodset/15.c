
#include <stdio.h>

int main(){

   int n,res,sum=0,temp;
   scanf("%d",&n);
   res=(n*(n+1))/2;
   for(int i=0;i<n;i++){
     scanf("%d",&temp);
     sum=sum+temp;
   }
   if(sum==res)
      printf("YES\n");
   else
      printf("NO\n");
   return 0;
}
