#include<stdio.h>

int main(){
  int min[32],max[32];
  int i,j,k;
  min[0] = 0;
  max[0] = 0;
  for(i=1;i<32;i++){
    k = i/2;
    min[i] = min[k] + min[i-k-1] + i + 1;
    max[i] = max[i-1] + i + 1;
  }
  int n,m,t;
  scanf("%d",&t);
  while(t--){
    scanf("%d %d",&n,&m);
    if(min[n] > m){
      printf("-1\n");
    }
    else if(m <= max[n]){
      printf("0\n");
    }
    else{
      printf("%d\n",m-max[n]);
    }
  }
  return 0;
}
