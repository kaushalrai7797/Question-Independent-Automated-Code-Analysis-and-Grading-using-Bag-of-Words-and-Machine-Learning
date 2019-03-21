#include<stdio.h>
long long int Combo(long long int n,long long int r) {
  long long int i,result = 1;
  if(r> n/2)
    r = n-r;

  for(i = 1;i<=r;i++) {


    result *=  n--;
    result /= i+1;

  }
  return result;
}


int main() {
  int T;
  long long int N, K,R,n,r;

  scanf("%d",&T);
  while(T--) {
    scanf("%lld %lld",&N,&K);
    r= N - K;        // already choosen the K marbles one from each type
    n = K + r - 1;
    printf("%lld\n", Combo(n,r));
  }
  return 0;
}
