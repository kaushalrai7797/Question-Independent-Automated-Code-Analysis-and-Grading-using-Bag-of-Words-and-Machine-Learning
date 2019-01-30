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
	int t,motu[MAX],tomu[MAX],a[2*MAX],n,k,i,l,j;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d %d",&n,&k);
	   for(i=0;i<n;i++)
	      {
	      	scanf("%d",a+i);
	      	if(i%2==0)
	      	motu[i/2]=a[i];
	      	else
	      	tomu[i/2]=a[i];
		  }
	//	l=(n%2==0)?n/2:n/2+1;
		if(arraySum(motu,0,n/2-1)<arraySum(tomu,0,n/2-1))
		 printf("YES\n");
	   else
	    {
	    	mergeSort(tomu,0,n/2-1);
		 // if(n%2==0) 
	    	mergeSort(motu,0,n/2-1);
		/*  else
			mergeSort(motu,0,n/2);	*/	
	   } 
	   j=0;
	   for(i=n/2-1;i>n/2-1-k;i--)
	   {
	   	swap(&tomu[j],&motu[i]);
	   	 j++;
	   }
	   if(arraySum(motu,0,n/2-1)<arraySum(tomu,0,n/2-1))
		 printf("YES\n");
		 else
		 printf("NO\n");
	}
}