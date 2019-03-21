#include<stdio.h>
int main()
{
    int i,n,j,t;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d",&n);
        int A[n],B[n-1];
        for(i=0;i<n;i++)
           {
             scanf("%d",&A[i]);
           }
        for(i=0;i<n-1;i++)
        {
            for (j=0;j<((n-i)-1);j++)
            {
                if(A[j] > A[j+1])
                {
                    t = A[j];
                    A[j]=A[j+1];
                    A[j+1]=t;
                }
            }
        }
     for(i=0;i<n-1;i++)
     {
         B[i] = A[i+1]-A[i];
     }
     for(i=0;i<n-2;i++)
        {
            for (j=0;j<((n-i)-2);j++)
            {
                if(B[j] > B[j+1])
                {
                    t = B[j];
                    B[j]=B[j+1];
                    B[j+1]=t;
                }
            }
        }
        printf("%d",B[0]);
    }
    return 0;

}
