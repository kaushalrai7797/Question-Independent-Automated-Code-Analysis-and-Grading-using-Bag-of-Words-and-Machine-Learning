#include<stdio.h>
#include<stdlib.h>
int comp(const void *p,const void *q)
{
	int l=*(const int *)p;
	int r=*(const int *)q;
	return l-r;
}
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int a,n,m,flag=0,i,l=0,k=0;
		scanf("%d%d",&n,&m);
		int arr[n],brr[m];
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a>0)
				arr[l++]=a;
		}
		for(i=0;i<m;i++){
			scanf("%d",&a);
			if(a>0)
				brr[k++]=a;
		}
		qsort(arr,l,sizeof(arr[0]),comp);
		qsort(brr,k,sizeof(brr[0]),comp);
		if(l==k)
		{
			for(i=0;i<l;i++)
			{
				if(arr[i]!=brr[i]){
					flag=1;
					break;
				}
			}
		}
		//if(n==0 && m==0)
		//	printf("Bob\n");
		if(l==k && flag==0)
			printf("Bob\n");
		else
			printf("Alice\n");
	}
	return 0;
}
