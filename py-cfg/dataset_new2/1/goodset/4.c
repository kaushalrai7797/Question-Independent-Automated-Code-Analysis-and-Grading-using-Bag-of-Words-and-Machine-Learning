#include<stdio.h>
#include<string.h>

int main()
{
    int t,a[130],i;

    char c;

    scanf("%d",&t);
    scanf("%c",&c);

    if(t>=1 && t<=314)
    {
        while(t--)
        {
            for(i=97 ; i<=122 ; i++)
                a[i]=0;

            char q[315];

            gets(q);

            for (i=0 ; i<strlen(q) ; i++)
            {
                q[i] = tolower(q[i]);
                a[q[i]] = 1;
            }

            for(i=97 ; i<=122 ; i++)
            {
                if(a[i] == 0)
                {
                    printf("%c\n",i);
                    break;
                }

                if(i == 122)
                    printf("~\n");
            }
        }
    }

    return 0;
}
 
