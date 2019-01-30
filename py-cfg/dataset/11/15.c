#include <stdio.h>
#include <string.h>
int main()
{
    int t,c,ma=-1,i,j,k;
    char a[1000];
    char b[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %s",&a,&b);
    }
    if(strlen(b)<strlen(a))
        printf("NO\n");
    else if(strlen(b)==strlen(a))
    {
        if(strcmp(a,b)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
    {k=1;
      for(i=0;i<strlen(a);i++)
      {  c=0;
          for(j=0;j<strlen(b);j++)
          {
              if(a[i]==b[j])
              {
                  if(j>=ma)
                  {
                      ma=j;
                      c=1;
                  }
              }
          }
          if(c==0)
          {k=0;
            break;
          }
      }
    if(k==1)
        printf("YES\n");
        else if(k==0)
            printf("NO\n");
    }
}
