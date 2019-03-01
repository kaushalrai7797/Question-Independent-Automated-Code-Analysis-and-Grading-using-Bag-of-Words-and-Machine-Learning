#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    int c,d,l,cn=0;
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&c,&d,&l);
        if(l%4==0 && l<=(c+d)*4 && ((l>=d*4&&c-2*d<=0) || (l>=4*(c-d)&&c-2*d>0)));
        cn=1;
        if(cn==1)
            printf("yes\n");
        else
            printf("no\n");
    }
	return 0;
}

