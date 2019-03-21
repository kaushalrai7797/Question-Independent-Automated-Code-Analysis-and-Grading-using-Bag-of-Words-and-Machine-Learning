/*Array Transform*/
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {   int n,k;
        scanf("%d %d",&n,&k);
        int a[n],i;
        int different=0,count[1001]={0};
        for(i=0;i<n;i++)
        {   scanf("%d",&a[i]);
            count[a[i]]++;
        }
        int temp,c=1;
        while(c)
        {   c=0;
            int visit1[100]={0};
            for(i=0;i<n;i++)
            {   temp=a[i]-(k+1);
                if(temp>=0)
                {   if(count[temp])
                    {   a[i]--;
                        c=1;
                        count[temp]--;
                        count[a[i]]++;
                        visit1[i]++;
                    }
                }
            }
            if(c)
            {   for(i=0;i<n;i++)
                {   if(visit1[i]==0)
                        a[i]+=k;
                }
            }
        }
        int visit[1001]={0},count1=0;
        for(i=0;i<n;i++)
        {   //printf("%d\n",a[i]);
            if(visit[a[i]]==0)
            {   count1++;
                visit[a[i]]++;
            }
        }
        if(count1<=2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
