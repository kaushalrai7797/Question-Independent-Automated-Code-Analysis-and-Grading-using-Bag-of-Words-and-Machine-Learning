#include <stdio.h>

int main(void) {
	int t;
	
	scanf("%d",&t);
	
	while(t--){
	     int n,m;
	     
	     scanf("%d%d",&n,&m);
	     
	     int arr1[n],arr2[m];
	     
	     for(int i=0;i<n;i++){
	          scanf("%d",&arr1[i]);
	     }
	     
	     for(int i=0;i<m;i++){
	          scanf("%d",&arr2[i]);
	     }
	     
	     int c10=0,c11=0,c20=0,c21=0;
	     
	     for(int i=0;i<n;i++){
	          if(arr1[i]==1){
	               c11++;
	          }else if(arr1[i]==0){
	               c10++;
	          }
	     }
	     
	     for(int i=0;i<m;i++){
	          if(arr2[i]==1){
	               c21++;
	          }else if(arr2[i]==0){
	               c20++;
	          }
	     }
	     
	     if(c11==c21 && c11+c10==n && c20+c21==m){
	          printf("BOB\n");
	     }else{
	          printf("ALICE\n");
	     }
	}
	return 0;
}

