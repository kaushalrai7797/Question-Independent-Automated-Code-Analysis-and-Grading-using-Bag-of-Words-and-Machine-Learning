#include<stdio.h>
main(){	
	 int n,l,r,i,t,a,j;
	 scanf("%d",&t);
	 for(j=0;j<t;j++){
	 		scanf("%d %d",&l,&r);
	 		a=l;
	 		i=1;
	 	while(i<r){
	 		a=a^(i+1);
	 		i++;
		}
	if(a%2==0)
		printf("Even\n");
	else
		printf("Odd\n");
	}
}

