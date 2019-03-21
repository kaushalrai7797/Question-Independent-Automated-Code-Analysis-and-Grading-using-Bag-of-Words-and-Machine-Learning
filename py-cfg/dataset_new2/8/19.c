#include <stdio.h>

int main(void) {
	int n,i,j,k,a,b[10],temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	    scanf("%d",&a);
	    for(i=1;i<=a;i++){
	        scanf("%d",&b[i]);
	    }
	    for(j=0;j<a-1;j++){
	        for(k=0;k<a-1;k++){
	            if(a[i]>a[i+1]){
	                temp=a[i];
	                a[i+1]=a[i];
	                a[i]=temp;
	            }
	        }
	    }
	    printf("%d\n",a[1]-a[0]);
	}
	return 0;
}
