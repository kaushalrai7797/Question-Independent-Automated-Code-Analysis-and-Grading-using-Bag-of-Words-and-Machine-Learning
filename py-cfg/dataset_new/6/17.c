#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,k,p=0,g=0,d=0,x=0;
        scanf("%d %d %d",&n,&a,&k);
        p=(n-2)*180-n*a;
        g=((n-1)*n)/2;
       d=p/g;
        x=k*d;
        printf("%d 1\n",x);
        
    }
	return 0;
}

