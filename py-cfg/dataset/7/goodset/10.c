#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define min(x,y) (x<y)?x:y

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	
		char arr[1000005];
		scanf("%s",arr);
		long long int l=strlen(arr);
	int sum=0,r;
		for(int i=0;i<l;i++)
		{
			sum+=arr[i]-'0';
		}
		if(sum>9)
		{
			if(sum%9==0)
				printf("0\n");
			else
			{
				r=sum%9;
				if(r>9-r)
					printf("%d\n",(9-r));
				else
					printf("%d\n",r);
			}
		}
		else
		{
			if(l!=1)
				printf("%d\n",(9-sum));
			else
				printf("%d\n",min((9-(sum%9)),sum%9));
		}


	}
	return 0;
}



