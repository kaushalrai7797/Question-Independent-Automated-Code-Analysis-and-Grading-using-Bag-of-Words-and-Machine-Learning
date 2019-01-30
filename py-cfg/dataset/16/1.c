#include <stdio.h>
int main()
{
    long int n,k,i,j,temp,val=0,top=0,sum=0;
    scanf("%ld",&n);
    int a[n],b[n];
    for( i=0;i<n;i++)
       scanf("%d",&a[i]);
    scanf("%ld",&k);
    for(i=0;i<k;i++)
       scanf("%d",&b[i]);
    for(i=0;i<n-1;i++)
       for (j=i;j<n;j++)
             if(a[i]>a[j])
             {
              temp=a[i];
               a[i]=a[j];
               a[j]=temp;
             }
 for(i=0;i<k;i++)
 {
    while(b[i]!=0 && n>0)
    {
        val=val+a[top];
        top++;
        n=n-b[i];
    }
    if(b[i]!=0)
    printf("%ld\n",val);
    else
    printf("10 \n");
}
return 0;
}