#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
              int a[1001],n,K;int c[1001];
              memset(a,0,sizeof(a));memset(c,0,sizeof(c));
              scanf("%d %d",&n,&K);
              for(int x=1;x<=n;x++)
              {
                      scanf("%d",&a[x]);
              }
              for(int x=1;x<=n;x++)
              {
                      a[x]%=(K+1);
              }

                for(int x=1;x<=n;x++)
              {
                      c[a[x]]++;
              }   int cek = 0;
              for(int x=0;x<(K+1);x++)
                if(c[x]>=n-1){cek=1;break;}
              //else {cek=0;}
              //for(int x=0;x<(K+1);x++)printf("%d\n",c[x]);
              if(cek || n<=2)printf("YES\n");
              else printf("NO\n");
    }
}
