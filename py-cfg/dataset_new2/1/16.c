#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n-->0)
    {

        char A[4000];
        getchar();
        gets(A);
        int chh[27]={0};
        for(int i=0;A[i]!='\0';i++)
        {
            if(A[i]>=65 && A[i]<=90)
            {
                A[i]=A[i]+32;
            }
            if(A[i]>=97 && A[i]<=122)
            {
                chh[A[i]-97]=1;
            }
        }

        int dss=26;
        for(int i=0;i<26;i++)
        {
            if(chh[i]==1)
            {
                dss-=1;
            }
            else
            {
                printf("%c",i+97);
            }
        }
        if(dss==0)
        {
            printf("~\n");
        }
        else
        {
        printf("\n");
        }
    }
    return 0;
}
