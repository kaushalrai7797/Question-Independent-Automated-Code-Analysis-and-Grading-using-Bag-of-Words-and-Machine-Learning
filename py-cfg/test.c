#include<stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int num;
		scanf("%d", &num);
		int rev=0;
		while(rev)
		{
			rev=rev*10 + num%10;
			num=num/10;
		}
		printf("%d\n", rev);
	}
	return 0;
}