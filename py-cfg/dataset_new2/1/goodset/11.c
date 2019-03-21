#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    char b[320];
    gets(b);
    while(t--)
    {
        int a[26];
        for(int i=0;i<26;i++)
        a[i]=0;
        gets(b);
        int set=0;
        int i;
        for(i=0;i<strlen(b);i++)
        {
            int c=b[i]-'a';
            int d=b[i]-'A';
            if((c>=0)&&(c<=25))
            a[c]++;
            else if((d>=0)&&(d<=25))
            a[d]++;

        }
        for(int i=0;i<26;i++)
        {  char p='a'+i;
            if(a[i]==0)
            {   printf("%c\n",p);
                set=1;
                break;
            }
        }
        if(set==0)
        printf("~\n");

    }
} 
