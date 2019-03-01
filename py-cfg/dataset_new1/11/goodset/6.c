#include <stdio.h>

int main() {
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,s,num=0;
        scanf("%d %d %d",&n,&k,&s);
        num = (k*s)/n;
        if((n<k) || (s>=7 && (n-k)*6<k))
            printf("-1\n");
        else
        {
            if((k*s)%n == 0)
                printf("%d\n",num);
            else
                printf("%d\n",num+1);
        }
    }
	return 0;
}

