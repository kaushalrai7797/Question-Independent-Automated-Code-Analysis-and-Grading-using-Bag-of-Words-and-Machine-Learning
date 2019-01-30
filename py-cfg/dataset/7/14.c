#include <stdio.h>

int main() {
	//code
	long int n;
     scanf("%lld",&n);
     while(n--)
     {
        unsigned long long int a,i;
        scanf("%llu",&a);
        int s1=0;
        for(i=a;i>0;i=i/10)
        {
             s1=s1+(i%10);
            s1=s1%9;
    //    printf("%d\n",s1);
            
        }
        
        int t=9-s1;
        if(t>s1)
        printf("%d\n",s1);
        else
        printf("%d\n",t);
     }
	return 0;
}