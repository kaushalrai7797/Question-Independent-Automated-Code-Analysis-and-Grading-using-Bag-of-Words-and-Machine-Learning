#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char m[25001],w[25001];
        scanf("%s %s",m,w);
        int lenw,lenm,i,j,ans=0;
        lenw=strlen(w);
        lenm=strlen(m);
        for(i=0;i<lenw;i++)
        {
            if(m[0]==w[i])
            {
                for(j=0;j<lenm;j++)
                {
                    if(m[j]==w[i])
                    {
                        ans=1;
                        i=i+1;
                    }
                    else
                    {
                        ans=1;
                        i=i+1;
                        j=j-1;
                    }
                    if(i>lenw)
                    {
                        ans=0;
                        break;
                    }
                }
            }
            if(ans==1)
                break;
        }
        if(ans==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
}