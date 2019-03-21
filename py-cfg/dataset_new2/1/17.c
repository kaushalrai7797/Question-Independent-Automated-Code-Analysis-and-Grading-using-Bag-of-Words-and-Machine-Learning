#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {
        char A[1000];
        scanf("\n%[^\n]",&A);
        for(int i=0;i<strlen(A);i++)
        {
            if(A[i]<97 && A[i]!=' ' && A[i]!=',' && A[i]!='!' && A[i]!='@' && A[i]!='.' && A[i]!='/')
            {
                A[i]=(A[i]-65)+97;
            }
        }
        int dss=0;
        for(int i=97;i<=122;i++)
        {
            int flag=0;
            for(int j=0;j<strlen(A);j++)
            {
                if(i==A[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("%c",i);
                dss=1;
            }
        }
        if(dss==0)
        {
            printf("~");
        }
        printf("\n");
    }
    return 0;
}
