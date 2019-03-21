#include <stdio.h>

int main(void) {
	// your code goes here
	int i,T,n,j,k,min;
	scanf("%d",&T);
	for(i=0;i<T;i++){
	    scanf("%d",&n);
	    int S[n],D[n][n];
	    for(j=0;j<n;j++){
	        scanf("%d",&S[j]);
	    }
	    min=1000000;
	    for(j=0;j<n;j++){
	        for(k=0;k<n;k++){
	            D[j][k] = S[j]>S[k]?S[j]-S[k]:S[k]-S[j];
	            if(D[j][k]!=0)
	                min = D[j][k]>min ? min : D[j][k];
	        }
	    }
	    printf("%d\n",min);
	}
	return 0;
}
