#include<stdio.h>
#include<string.h>
#include<ctype.h>

void low_case(char str[],int l)
{
    int i;
    for(i=0;i<l;i++)
        str[i]=tolower(str[i]);
}

int main()
{
    int t;
    scanf("%d",&t);
    char y;
    scanf("%c",&y);
    while(t--)
    {
        char str[500];
        char x;
        scanf("%d",&x);
        fgets(str,500,stdin);
        int l=strlen(str);
        low_case(str,l);
        char s[]="abcdefghijklmnopqrstuvwxyz";
        int i;
        for(i=0;i<26;i++)
        {
            x=s[i];
            int j;
            for(j=0;j<l;j++)
            {
                if(str[j]==x)
                    break;
            }
            if(j==l)
            {
                printf("%c\n",x);
                break;
            }
        }
        if(i==26)
        {
            printf("~\n");
        }
    }
}
