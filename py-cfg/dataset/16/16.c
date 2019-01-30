#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int test,i,k,n;     scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);    
    }
    scanf("%d",&test);
      qsort(a, n, sizeof(int), cmpfunc);
    while(test>0)
    {
        test--;
        k=0;
        scanf("%d",&k);    
        int sum=0;
        for(i=0;i<(n-k);i++)
        {
            sum=sum+a[i];
            
        }
        printf("%d",sum);
    }
return 0;
}