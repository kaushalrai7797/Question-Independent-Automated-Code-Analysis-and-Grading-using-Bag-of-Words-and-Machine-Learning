#include<stdio.h>
main(){	
	 int n,l,r,i,j,t,a,b,x,xor;
	 //printf("enter the test case u want:\n");
	 scanf("%d",&t);
	 while(t--){
	 	//	printf("enter the left and right limit :\n");
	 		scanf("%d %d",&l,&r);
	 		a=l;
	 		for(i=l;i<r;i++){
	 		a=a^(i+1);
	 		//printf("exor values:%d",a);
		}
					if((a%2)==0){
						printf("Even\n");
					}
					else{
						printf("Odd\n");
					}
			 }
	 }

