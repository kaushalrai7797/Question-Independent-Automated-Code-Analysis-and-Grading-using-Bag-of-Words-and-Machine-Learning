#include<iostream>
#include<math.h>
using namespace std;

int last(long long n){
   if(n/10)
   return last(n/10);
    else return n;
}
int noOfDigits(long long n){
   int x=0;
   while(n){
      x++;
      n /= 10;
   }
   return x;
}

int main(){
    long long n,k;
    int count,t;
    cin>>t;
    while(t){
        cin>>k;
        int h = 0;
        n = 9;
        k = k-2;
        while(k){
         if(n<10)
            {n++;}
         else{
            if(n+last(n)+1<(last(n)+1)*pow(10,noOfDigits(n)-1))
               n += last(n);
            else{
                n += last(n)+1;                  
            }
         }
         k--;   
        }
    cout<<n<<endl;
    t--;}
}
