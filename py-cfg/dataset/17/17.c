#include <stdio.h>

int main(void) {
    int t;
    //testcases
    scanf("%d",&t);
    
    int i;
    int k;
    for(k=0;k<t;k++)
    {
        float sum,sum2;
        sum=sum2=0;
        int n;
        float avg;
        scanf("%d",&n);
        
        int non;
        scanf("%d",&non);
        
        
        for(i=0;i<non;i++)
        {
            int a;
        scanf("%d",&a);
        sum2=sum2+a;
        }
        
        int tear;
        scanf("%d",&tear);
        
        for(i=1;i<=n;i++)
        sum=sum+i;
        
        avg=(sum-sum2)/n;
        if(tear!=0)
        sum=sum-sum2-tear*avg*2;
        
        if(tear==0)
        sum=sum-sum2;
        printf("%.4f \n",sum);
        
        
    }


}