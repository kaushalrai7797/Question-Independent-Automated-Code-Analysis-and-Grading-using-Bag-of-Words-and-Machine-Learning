#include <stdio.h>
#include <string.h>
int main()
{
    int t,j;
    scanf("%d",&t);
    while(t--)
    {
        int flag=1;
        char c1[1001];
        char c2[1001];
        scanf("%s %s", c1, c2);
        int arr1[26];
        int arr2[26];
        int l1,l2;
        l1=strlen(c1);
        l2=strlen(c2);
        for(j=0;j<26;j++)
        {
            arr1[j]=0;
            arr2[j]=0;
        }
        for(j=0;j<l1;j++)
        {
            arr1[c1[j]-97]+=1;
        }
        for(j=0;j<l2;j++)
        {
            arr2[c2[j]-97]+=1;
        }
        for(j=0;j<26;j++)
        {
             if((arr1[j]!=arr2[j]) &&arr1[j]!=0 &&arr2[j]!=0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else if(flag==0)
        {
            printf("NO\n");
        }
    }




    return 0;
}
