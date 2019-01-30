#include<stdio.h>

void quickSort(int arr[], int low, int high);
int partition (int arr[], int low, int high);
void swap(int* a, int* b);

int main()
{
	int n,m,i,j,k,q;
	scanf("%d",&n);
	int a[n],sum[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum[i]=0;
	}
	quickSort(a,0,n-1);
	sum[0]=a[0];
	for(i=0;i<n;i++)
	sum[i]=sum[i-1]+a[i];
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&k);
		if(k==0)
		printf("%d\n",sum[n-1]);
		else
		{
			k=k+1;
			if(n%k==0)
			j=n/k;
			else
			j=n/k+1;
			printf("%d\n",sum[j-1]);
		}
	}
}

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    
    for (j = low; j <= high- 1; j++) 
    { 
        if (arr[j] <= pivot) 
        { 
            i++; 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
}