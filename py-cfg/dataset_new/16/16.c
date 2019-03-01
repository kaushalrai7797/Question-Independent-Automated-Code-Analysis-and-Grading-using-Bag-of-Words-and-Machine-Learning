#include <stdio.h>

int fact(int a){
    if(a==0 || a==1)
      return 1;
    else 
      return (a*fact(a-1));
}
int main(void) {
	// your code goes here
	int i,n,f,a;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
	    scanf("%d",&a);
	    f=fact(a);
	    printf("%d\n",f);
	}
	
	
	return 0;
}

