#include <stdio.h>

double fact(int a){
    if(a==0 || a==1)
      return 1;
    else 
      return (a*fact(a-1));
}
int main(void) {
	// your code goes here
	int i,n,a;
	double f;
	scanf("%d",&n);
	while(n--)
	{
	    scanf("%d",&a);
	    f=fact(a);
	    printf("%lf\n",f);
	}
	
	
	return 0;
}

