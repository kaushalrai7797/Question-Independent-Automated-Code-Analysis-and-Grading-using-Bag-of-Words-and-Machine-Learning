#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
    long int test,i,k,n;     scanf("%ld",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    scanf("%ld",&test);
      qsort(a, n, sizeof(int), cmpfunc);
    while(test>0)
    {
        test--;
        k=0;
        scanf("%ld",&k);    
        int sum=0;
        for(i=0;i<(n-k);i++)
        {
            sum=sum+a[i];
            
        }
        printf("%d",sum);
    }
return 0;
}