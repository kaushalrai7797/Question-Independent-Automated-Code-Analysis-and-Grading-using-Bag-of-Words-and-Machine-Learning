#include<stdio.h>
int cats()
{
    long long int c,d,l,r;
        int i;
        scanf("%lld%lld%lld",&c,&d,&l);
        r=l%4;
        l=l/4;
        if(r!=0)
           return 0;
        if(c<=2*d)
              if(l>=d&&l<=c+d)
                 return 1;
        if(c>2*d)
              if(l>=c-d&&l<=c+d)
                 return 1;
        return 0;
}
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--){
    if(cats())
        printf("yes\n");
    else
        printf("no\n");
    }
}