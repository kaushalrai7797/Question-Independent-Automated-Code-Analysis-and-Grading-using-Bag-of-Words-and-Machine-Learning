#include<stdio.h>
#define MAX 5000
void swap(int *a, int *b)
	{
		int temp;
		temp=*a;
		*a=*b;
		*b=temp;
	}
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
}
int arraySum(int *a, int beg, int end)
{
	int i,sum=0;
	for(i=beg;i<=end;i++)
	 sum+=a[i];
	 return sum;
 } 
int main()
{
	int t,n,k,i,l,j,K;
	int motu[5001]={0},tomu[5001]={0},a[100000]={0};
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d %d",&n,&K);
	   for(i=0;i<n;i++)
	      {
	      	scanf("%d",&a[i]);
		  }i=0,k=0;
		   while((i%2==0)&&(i<n))
		  {
		  	motu[k++]=a[i];
		  	i+=2;
		  }
		  i=1,l=0;
		  while((i%2==1)&&(i<n))
		  {
		  	tomu[l++]=a[i];
		  	i+=2;
		  }
		l=(n%2==0)?n/2:n/2+1;
		if(arraySum(motu,0,l-1)<arraySum(tomu,0,n/2-1))
		 printf("YES\n");
	   else
	    {
	    	mergeSort(tomu,0,n/2-1);
		    mergeSort(motu,0,l-1);		
	    
	   for(i=0;i<K;i++)
			{
				if(tomu[i]<motu[l-i-1])
				{
					swap(&tomu[i],&motu[l-i-1]);
				}
				else
				break;
			}
	   if(arraySum(motu,0,l-1)<arraySum(tomu,0,n/2-1))
		 printf("YES\n");
		 else
		 printf("NO\n");
	}
}
}