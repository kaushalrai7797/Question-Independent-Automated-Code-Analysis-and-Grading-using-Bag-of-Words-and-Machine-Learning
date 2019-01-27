#include<stdio.h>
unsigned int T;
unsigned int N;
int main(void)
{
	scanf("%d",&T);
	while(T--)
	{
		unsigned int num = 0;
		scanf("%d",&N);
		while(N)
		{
			num *= 10;
			num += N%10;
			N /= 10;
		}
		printf("%d\r\n",num);
	}
}