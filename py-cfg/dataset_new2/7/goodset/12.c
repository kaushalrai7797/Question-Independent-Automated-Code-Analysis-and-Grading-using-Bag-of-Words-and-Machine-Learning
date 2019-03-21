#include <stdio.h>

int find(int N)
{
	if(N==0)
		return 0;
	if(N==1)
		return 2;
	if(N%2==0)
		return (N+1)+find(N/2)+find(N/2-1);
	if(N%2!=0)
		return (N+1)+2*find(N/2);

}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int N,M;
		scanf("%d %d",&N,&M);
		int max=(N+1)*(N+2)/2-1;
		if(M>max)
			printf("%d\n",M-max);
		else
		{
			int min=find(N);
			if(min > M)
				printf("-1\n");
			else
				printf("0\n");

		}



	}
return 0;
}
