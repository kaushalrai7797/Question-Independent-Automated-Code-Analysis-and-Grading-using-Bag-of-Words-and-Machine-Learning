#include<stdio.h>
main(){	
	 int n,l,r,i,t,a;
	 scanf("%d",&t);
	 while(t--){
	 		scanf("%d %d",&l,&r);
	 		a=l;
	 		for(i=l;i<r;i++){
	 		a=a^(i+1);
		}
					if((a%2)==0)
						printf("Even\n");
					else
						printf("Odd\n");
	}
}

