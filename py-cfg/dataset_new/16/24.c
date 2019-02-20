#include<stdio.h>


int main()
{
    int testCase,fact=1;

    // printf("\nEnter the number of test cases: ");
    scanf("%d",&testCase);

    int a[testCase];
    int i;
    // printf("\nEnter the test cases: ");
    for(i=0;i<testCase;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(i=0;i<testCase;i++)
    {
        fact=1;
        if(a[i]==0)
        fact=0;
        if(a[i]==1)
        fact=1;
        else
        {
            for(j=1;j<=a[i];j++)
            {
                fact= fact*j;
            }
        }


        printf("\n%d",fact);
    }
    printf("\n");
    return 0;
}

