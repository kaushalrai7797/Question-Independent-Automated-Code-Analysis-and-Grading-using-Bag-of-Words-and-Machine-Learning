#include<stdio.h>
int main()
{
    int t;
    printf("Enter the number pf test cases\n");
    scanf("%d ",&t);
    for(int i=0;i<t;i++)
    {
        int k;
        printf("Enter a base number\n");
        scanf("%d ",&k);
        for(int j=k+1;j>k;j++)
        {
            int temp=j,d,rev=0;
            while(temp!=0)
            {
                d=temp%10;
                rev=rev*10+d;
                temp=temp/10;
            }
            if(rev==j)
            {
                printf("%d\n",j);
                break;
            }
            else
            continue;
        }
    }
}
