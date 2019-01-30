#include<stdio.h>
#include<stdlib.h>
int main()
{   long int n;
long int b[100000],sum=0,q;
       scanf("%ld",&n);
       long int a[100000];
         int cmpfunc (const void * a, const void * b) //what is it returning?
{
   return ( *( int*)a - *(int*)b ); //What is a and b?
}

/*  long int findSum(long int A[], long int N) 
{ 
    if (N < 0) 
        return 0; 
    return (findSum(A, N - 1) + A[N - 1]);}*/

       for( long int i=0;i<n;i++)
        scanf("%ld",&a[i]);
         
       qsort((void*)a,n,sizeof(long int),cmpfunc);
   for(int r=0;r<n;r++)
      {sum+=a[r];
         b[r]=sum;}
        // for (  long int j=0; j < n; j++) 
        //printf("%d ", b[j]);
        //printf("\n");
       long int f;
       scanf("%ld",&q);
       for(long int j=0;j<q;j++)
     {  scanf("%ld",&f);
      printf("%ld\n", b[n-(f+1)]);  }
      
   return 0;    
}