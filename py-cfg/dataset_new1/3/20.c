#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int arr[n],c[n];
	for(int i=0;i<n;i++){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>b){
	    arr[i]=a-b;
	    c[i]=1;
	    }
	    else{
	    arr[i]=b-a;
	    c[i]=2;
	    }
	}
	int max=arr[0],k=0;
	for(int i=0;i<n;i++){
	    if(arr[i]>max){
	        max=arr[i];
	        k=i;
	    }
	}
	printf("%d %d",c[k],max);
	return 0;
}

