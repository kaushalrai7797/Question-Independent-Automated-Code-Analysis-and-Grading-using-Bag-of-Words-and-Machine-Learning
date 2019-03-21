#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    char a[315];
    char b;
    char g[]="abcdefghijklmnopqrstuvwxyz";
    scanf("%c",&b);
    for(i=0;i<t;i++)
    {
        gets(a);
        int bc = strlen(a);
        int w,m,s=0,po=0;
        for(w=0;w<bc;w++)
        {
            a[w] = tolower(a[w]);
        }
        for(w=0;g[w]!='\0';w++)
        {
            s=0;
            for(m=0;m<bc;m++)
            {
                if(g[w]!=a[m])
                {
                    s+=1;
                }
            }
            if(s==bc)
            {
                po=1;
                printf("%c\n",g[w]);
                break;
            }
        }
        if(po==0)
        {
            printf("~\n");
        }

    }
    return 0;
}
