#include<stdio.h>
int main()
{
    int t,a[200],n,i,mo,ss;
    char ch,b[200];
    scanf("%d ",&t);
    while(t--)
    {
        mo=ss=0;
        gets(b);
        n=strlen(b);
        for(i=0;b[i]!='\0';i++)
        {
            ch=b[i];
            switch(ch)
            {
            case 's':
                {
                    a[i+1]=0;
                    break;
                }
            case 'm':
                {
                    a[i+1]=1;
                    break;
                }

            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==1)
            {
                if(i==1)
                {
                    if(a[i+1]==0)
                        a[i+1]=2;
                }
                else
                {
                    if(a[i-1]==0)
                    {
                        a[i-1]=2;
                    }
                    else if((a[i+1]==0)&&((i+1)<=n))
                    {
                        a[i+1]=2;
                    }
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==1)
                mo++;
            else if(a[i]==0)
                ss++;
        }
        if(mo==ss)
            printf("tie\n");
        else if(mo>ss)
            printf("mongooses\n");
        else
            printf("snakes\n");
    }
    return 0;
}
