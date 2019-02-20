#include<stdio.h>

#include <math.h>

int main( ) {
   int t;
   long int a,b,n;
   scanf("%d",&t);
   while(t--) {
     scanf("%ld %ld %ld",&a,&b,&n);
     long int max,min,result;
     if(n%2==0)
       if(a>b){
          max=a;
          min=b;
         }
       else {
          max=b;
          min=a;
        }
      else {
        a=a*2;
        if(a>b){
          max=a;
          min=b;
          }
         else {
          max=b;
          min=a;
         }
       }
     result=max/min;
     printf("%ld\n",result);
     }
     return 0;
    }


