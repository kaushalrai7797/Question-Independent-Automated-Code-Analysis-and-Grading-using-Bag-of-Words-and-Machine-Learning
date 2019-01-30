#include<stdio.h>
int arr[100000];
int cf[100000][5];
typedef struct info INFO;

int main()
{

	
	int i,j,k,n,t,p,a,b;
	for(i=2;i<=50000;i++)
	{
		if(arr[i]==0)
		{
		 arr[i]=1;
		 for(j=2*i;j<=100000;j+=i)
		 {
		 	arr[j]++;
		 }
		}
	}
	cf[1][0]=cf[1][1]=cf[1][2]=cf[1][3]=cf[1][4]=0;
	for(i=2;i<=100000;i++)
	{ 
	for(j=0;j<5;j++)
	{ if(arr[i]-1!=j)
	  cf[i][j]=cf[i-1][j];
	  else
	  cf[i][j]=cf[i-1][j]+1;	
	}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&k);
		printf("%d\n",cf[b][k-1]-cf[a-1][k-1]);
	}
}