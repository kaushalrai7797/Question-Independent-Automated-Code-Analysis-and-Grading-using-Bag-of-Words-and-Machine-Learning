#include <stdio.h>


int prime(int x)
{
    int flag=0;
    int j=2;
    while(j<=(x/2))
    {
        if(x%j==0)
        {
            flag=1;
            break;
        }
        j++;
    }
    if(flag==0)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    int n;
    int prime(int x);
    scanf("%d",&n);
    while(n-->0)
    {
        int A,B,K;
        scanf("%d%d%d",&A,&B,&K);
        int k=0;
        for(int i=A;i<=B;i++)
        {
            int j=2;
            int count=0;
            while(j<=i)
            {
            if(i%j==0)
            {
                if(prime(j)==1)
                {
                    count++;
                }
            }
            j++;    
            }
        if(count==K)k++;
        }
        
    printf("%d\n",k);
    }
    return 0;
}
