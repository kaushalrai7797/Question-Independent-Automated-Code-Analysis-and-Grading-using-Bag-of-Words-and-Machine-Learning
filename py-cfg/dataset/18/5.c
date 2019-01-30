#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        char A[100],B[100];
        scanf("%s%s",&A,&B);
        
        int a[26],b[26];
        for(int i=0;i<26;i++)
        {
        a[i]=0;
        }
        for(int i=0;i<26;i++)
        {
            b[i]=0;
        }
        int val=0;
        for(int i=0;i<strlen(A);i++)
        {
            int flag=0;
            for(int j=0;j<strlen(B);j++)
            {
                if(A[i]==B[j])
                {
                    flag=1;
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
        for(int i=0;i<strlen(A);i++)
        {
            int flag=0;
            for(int j=0;j<strlen(B);j++)
            {
                if(A[i]==B[j])
                {
                    if(a[A[i]-97]==b[B[j]-97])
                    {
                        flag=1;        
                    }
                }
            }
            if(flag!=1)
            {
                pass=0;//length not same
                break;
            }
        }
        if(val==0)
        {
            if(pass==0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else 
        {
            if(pass==1)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        // if(pass==1 && val==1)
        // {
        //     printf("YES\n");    
        // }
        // else if(pass==0 && val==0)
        // {
        //     printf("NO\n");
        // }
        // else if(pass==0 && val==1)
        // {
        //     printf("NO\n");
        // }
        // else if(pass==1 && val==0)
        // {
        //     printf("NO\n");
        // }
    }
    return 0;
}
