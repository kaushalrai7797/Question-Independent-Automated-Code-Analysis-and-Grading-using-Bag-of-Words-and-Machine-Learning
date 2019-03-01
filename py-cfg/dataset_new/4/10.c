#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{long long int a,b,c,d;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
	long long int i,j,count=0;
	for(i=a;i<=b;i++)
	    {for(j=c;j<=d;j++)
	        {if(i<j)
	        {count++;}
	        else
	        {continue;}
	        }
	    }
	    printf("%lld\n",count);
	}
	return 0;
}

