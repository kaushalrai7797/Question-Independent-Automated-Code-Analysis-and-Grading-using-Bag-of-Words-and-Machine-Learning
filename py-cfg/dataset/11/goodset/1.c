#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        
        char str[25000];
        char str2[25000];
        char str3[25000];
        scanf(" %s",str);
        scanf(" %s",str2);
        int l1=strlen(str);
        int l2=strlen(str2);
        int i=0,j=0;
        if(l2>l1){
        for(i=0;i<l2;i++)
        {
            if(str[j]==str2[i])
            ++j;
        }
        if(j==l1)
        printf("YES\n");
        else
        printf("NO\n");}
        else 
        {
            for(i=0;i<l1;i++)
        {
            if(str2[j]==str[i])
            ++j;
        }
        if(j==l2)
        printf("YES\n");
        else
        printf("NO\n");
            
        }
    }
    return 0;
}