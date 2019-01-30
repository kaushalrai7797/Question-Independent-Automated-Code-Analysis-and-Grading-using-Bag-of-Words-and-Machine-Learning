#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        char A[1002],B[1002];
        scanf("%s%s",&A,&B);
        
        int a[28],b[28];
        for(int i=0;i<28;i++)
        {
        a[i]=0;
        }
        for(int i=0;i<28;i++)
        {
            b[i]=0;
        }
        int val=0;//false
        for(int i=0;i<strlen(A);i++)
        {
            int flag=0;
            for(int j=0;j<strlen(B);j++)
            {
                if(A[i]==B[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                val=0;//FALSE
                break;
            }
            else
            {
                val=1;//True
            }
        }
        
        for(int i=0;i<strlen(A);i++)
        {
            
            a[(A[i])-97]++;
            
        }
        for(int i=0;i<strlen(B);i++)
        {
            b[(B[i])-97]++;
        }
        
        int pass=1;    //length same
        for(int i=0;i<26;i++)
        {
            if(i<strlen(A) | i<strlen(B))
            {
            if(a[A[i]-97]!=0 && b[B[i]-97]!=0)
            {
                if(a[A[i]-97]!=b[B[i]-97])
                {
                    pass=0;
                    break;
                }
            }
            }
        }
        if(pass==val)
        {
            printf("YES\n");    
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}
