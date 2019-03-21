#include <stdio.h>
long long find(int,int);

int main(void){
  int a,n,m,i;

  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d%d",&n,&m);
    printf("%lld\n",find(n,m));
  }
  return 0;
}

long long find(int a,int b){
  int n = a-1;
  int r = b-1,i=0;
  long long result=1;
  if (r > n/2) {
    r = n - r;
  }
  for (i = 0; i < r; i++) {
    result *= (n-i);
    result /= (i+1);
  }
  return result;
}
