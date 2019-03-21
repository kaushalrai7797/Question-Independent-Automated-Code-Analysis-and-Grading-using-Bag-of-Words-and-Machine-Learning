#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[1000002];
       int l;
     int flag;
     int i;
    int test;
    int mid;
    scanf("%d",&test);
    flag=0;
    int check=0;
    while(test--)
    {
        scanf("%s",str);
            l=strlen(str);

        for(i=0;i<l;i++)
        {
            if(str[i]!='9')
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("1");
            for(long i=0;i<l-1;i++)
            printf("0");
            printf("1\n");
            continue;
        }
        if(flag==1)
        {
            check=0;
           for(i=0;i<l/2;i++)
             {
                if(str[i]<str[l-i-1])
                check=-1;
                else if(str[i]>str[l-i-1])
                check=1;
                str[l-i-1]=str[i];
             }

             if(l%2==0)mid=(l/2)-1;
             else mid=l/2;
            if(check==0||check==-1)
            {
                i=0;
                while(str[mid-i]=='9')
                             {
                             str[mid-i] = '0';
                             str[l-1-mid+i] = '0';
                             i++;
                             }
               str[mid-i]++;
                str[l-1-mid+i]=    str[mid-i];


            }
        }
        printf("%s\n",str);
    }
}
