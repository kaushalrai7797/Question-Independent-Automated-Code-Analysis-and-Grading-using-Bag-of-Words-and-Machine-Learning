#include<stdio.h>
int main()
{  long int n,q,sum,a[100000],b[100000];
       scanf("%ld",&n);
       for(long int i=0;i<n;i++)
       scanf("%ld",&a[i]);
void merge( long int arr[],long int l,  long int m, long int r) 
{ 
  long int i, j, k; 
   long int n1 = m - l + 1; 
    long int n2 =  r - m; 
  
    /* create temp arrays */
    long int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
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
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(long int arr[],long int l, long int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
       mergeSort(a, 0, n-1); 
         
    //for ( int h=0; h < n; h++) 
       // printf("%d ", a[h]); 
    //printf("\n"); 

       scanf("%ld",&q);
       for(long int j=0;j<q;j++)
       scanf("%ld",&b[j]);
                

      for( long int k=0;k<q;k++)
      {   sum=0;
             for(long int l=0;l<n-b[k];l++)
             sum+=a[l];
             printf("%ld\n",sum);
      }
       
   return 0;    
}